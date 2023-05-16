#pragma once

#include <string>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <fstream>

namespace util
{
	class ArgBase
	{
	public:
		ArgBase() {}
		virtual ~ArgBase() {}
		virtual void Format(std::ostringstream &ss, const std::string &fmt) = 0;
	};

	template <class T>
	class Arg : public ArgBase
	{
	public:
		Arg(T arg) : m_arg(arg) {}
		virtual ~Arg() {}
		virtual void Format(std::ostringstream &ss, const std::string &fmt)
		{
			ss << m_arg;
		}

	private:
		T m_arg;
	};

	class ArgArray : public std::vector<ArgBase *>
	{
	public:
		ArgArray() {}
		~ArgArray()
		{
			std::for_each(begin(), end(), [](ArgBase *p)
						  { delete p; });
		}
	};

	static void FormatItem(std::ostringstream &ss, const std::string &item, const ArgArray &args)
	{
		int index = 0;
		int alignment = 0;
		std::string fmt;

		char *endptr = nullptr;
		index = strtol(&item[0], &endptr, 10);
		if (index < 0 || index >= args.size())
		{
			return;
		}

		if (*endptr == ',')
		{
			alignment = strtol(endptr + 1, &endptr, 10);
			if (alignment > 0)
			{
				ss << std::right << std::setw(alignment);
			}
			else if (alignment < 0)
			{
				ss << std::left << std::setw(-alignment);
			}
		}

		if (*endptr == ':')
		{
			fmt = endptr + 1;
		}

		args[index]->Format(ss, fmt);

		return;
	}

	template <class T>
	static void Transfer(ArgArray &argArray, T t)
	{
		argArray.push_back(new Arg<T>(t));
	}

	template <class T, typename... Args>
	static void Transfer(ArgArray &argArray, T t, Args &&...args)
	{
		Transfer(argArray, t);
		Transfer(argArray, args...);
	}

	template <typename... Args>
	std::string Format(const std::string &format, Args &&...args)
	{
		if (sizeof...(args) == 0)
		{
			return format;
		}

		ArgArray argArray;
		Transfer(argArray, args...);
		size_t start = 0;
		size_t pos = 0;
		std::ostringstream ss;
		while (true)
		{
			pos = format.find('{', start);
			if (pos == std::string::npos)
			{
				ss << format.substr(start);
				break;
			}

			ss << format.substr(start, pos - start);
			if (format[pos + 1] == '{')
			{
				ss << '{';
				start = pos + 2;
				continue;
			}

			start = pos + 1;
			pos = format.find('}', start);
			if (pos == std::string::npos)
			{
				ss << format.substr(start - 1);
				break;
			}

			FormatItem(ss, format.substr(start, pos - start), argArray);
			start = pos + 1;
		}

		return ss.str();
	}

	class Node
	{
	public:
		Node(){

		}

		Node(std::string content){
			this->content = content;
		}

		Node(int content){
			this->content = std::to_string(content);
		}

		Node(double content){
			this->content = std::to_string(content);
		}

		void setContent(std::string content){
			this->content = content;
		}

		void setContent(int content){
			this->content = std::to_string(content);
		}

		void setContent(double content){
			this->content = std::to_string(content);
		}

		Node getContent(){
			return content;
		}

	private:
		std::string content;
	};

	class Edge
	{
	public:
		Edge(Node n1, Node n2){
			this->n1 = n1;
			this->n2 = n2;
		}

		void setEdge(Node n1, Node n2){
			this->n1 = n1;
			this->n2 = n2;
		}

		std::pair<Node,Node> getNode(){
			return std::make_pair(this->n1, this->n2);
		}

	private:
		Node n1; 	//father
		Node n2;	//child
	};

	class DotDrawer
	{
	public:
		DotDrawer(){

		}
		template <typename T>
		void addEdge(T c1, T c2){
			Node n1(c1), n2(c2);
			Edge e(n1, n2);
			this->edgeArray.push_back(e);
		}

		void genarateDot(){
			std::stringstream ss;
			ss << "digraph tree {"<<std::endl;
			ss << "\tfontname = \""<<this->fontname<<"\""<<std::endl;
			ss << "\tfontsize = "<<this->fontsize<<std::endl;
			ss << "node[shape = \""<<this->shape<<"\"]"<<std::endl;
			for (auto e : this->edgeArray){
				std::string oneEdge = Format("\"{}\" -> \"{}\";", e.getNode().first.getContent(), e.getNode().second.getContent());
				ss << "\t"<<oneEdge<<std::endl;
			}
			ss << "}";
			dot_content = ss.str();
		}

		void writeToFile(std::string fileName="test.dot"){
			std::ofstream out(fileName);
			if(out.is_open()){
				out << this->dot_content;
				out.close();
			}
		}

	private:
		std::vector<Edge> edgeArray;
		std::string fontname = "Consolas";
		std::string shape = "box";
		int fontsize = 24;
		std::string dot_content;
	};

}
