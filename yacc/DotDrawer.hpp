#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
using namespace std;

class TreeNode
{
public:
    int idx = 0;
    int depth = 0;
    string name;
    vector<TreeNode*> childNodes;

    TreeNode(){

    }

    TreeNode(string name)
    {
        this->name = name;
    }

    TreeNode(int name){
        this->name = to_string(name);
    }

    string getName()
    {
        return name + " (" + to_string(depth) + ")(" + to_string(idx)+")";
    }

    void print(){
        cout<<"{idx:"<<idx<<", depth:"<<depth<<", name:"<<name<<"}"<<endl;
    }
};


class Edge
{
public:

    Edge(TreeNode* n1, TreeNode* n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }

    std::pair<TreeNode*, TreeNode*> getTreeNode()
    {
        return std::make_pair(this->n1, this->n2);
    }

private:
    TreeNode* n1; // father
    TreeNode* n2; // child
};

class Tree
{
public:
    TreeNode* rootNode;

    Tree(){

    }

    void updateNodeDepth()
    {
        queue<TreeNode*> q;
        rootNode->depth = 0;
        q.push(rootNode);

        while (!q.empty())
        {
            auto treeNode = q.front();
            q.pop();
            for (auto childNode : treeNode->childNodes)
            {
                q.push(childNode);
                childNode->depth = treeNode->depth + 1;
            }
        }
    }

    vector<pair<TreeNode, int>>::iterator get_pair_vector_iterator(vector<pair<TreeNode, int>> &v, TreeNode* item)
    {
        auto it = v.begin();
        for (; it != v.end(); it++)
        {
            if (it->first.name == item->name && it->first.depth == item->depth)
            {   
                //出现冲突，即在同一层且同名
                // cout<<"[DEBUG] 冲突！"<<endl<<"first:"<<endl;
                // it->first.print();
                // cout<<"second:"<<endl;
                // item->print();
                return it;
            }
        }
        return it;
    }

    void update_node_idx(vector<pair<TreeNode, int>> &stored_name_times, TreeNode* treeNode)
    {
        auto it = get_pair_vector_iterator(stored_name_times, treeNode);
        if (it == stored_name_times.end())
        {
            // 没有找到，加进去
            stored_name_times.push_back(make_pair(*treeNode, 0));
        }
        else
        {
            treeNode->idx = ++it->second;
        }
    }

    void updateTreeNodeIdx(){
        queue<TreeNode*> q;
        vector<pair<TreeNode, int>> stored_name_times;
        q.push(rootNode);
        while (!q.empty())
        {
            auto treeNode = q.front();
            q.pop();
            update_node_idx(stored_name_times, treeNode);
            for (auto childNode : treeNode->childNodes)
            {
                q.push(childNode);
            }
        }
    }

    vector<Edge> getSortedSequence()
    {
        // step1: 更新节点depth
        updateNodeDepth();
        // cout<<"[DEBUG] 在更新depth后，先序遍历树"<<endl;
        // print_tree();
        // step2: 更新节点idx
        updateTreeNodeIdx();
        // cout<<"[DEBUG] 在更新idx后，先序遍历树"<<endl;
        // print_tree();
        // step3：先序遍历树,将结果保存
        vector<Edge> res;
        queue<TreeNode*> q;
        q.push(rootNode);
        while (!q.empty())
        {
            auto treeNode = q.front();
            q.pop();
            for (auto childNode : treeNode->childNodes)
            {
                Edge e(treeNode, childNode);
                res.push_back(e);
                q.push(childNode);
            }
        }
        return res;
    }

    void print_tree(){
        queue<TreeNode*> q;
        q.push(rootNode);
        while (!q.empty())
        {
            auto treeNode = q.front();
            q.pop();
            treeNode->print();
            for (auto childNode : treeNode->childNodes)
            {
                q.push(childNode);
            }
        }
    }
};

class DotDrawer
{
public:
    DotDrawer()
    {
    }
    template <typename T, typename T1>
    void addEdge(T c1, T1 c2, string sequenceString)
    {
        TreeNode tn1(c1);
        TreeNode tn2(c2);
        Edge e(tn1, tn2);
        // cout << "[DEBUG] " << n1.getContent() << " -> " << n2.getContent() << endl;
        this->edgeArray.push_back(e);
    }

    void genarateDot(Tree &tree)
    {
        vector<Edge> sortedEdgeArray = tree.getSortedSequence();
        // cout<<"[DEBUG] 在获取得sortedEdgeArray后"<<endl;
        // tree.print_tree();
        std::stringstream ss;
        ss << "digraph tree {" << std::endl;
        ss << "\tfontname = \"" << this->fontname << "\"" << std::endl;
        ss << "\tfontsize = " << this->fontsize << std::endl;
        ss << "\tnode[shape = \"" << this->shape << "\"]" << std::endl
           << std::endl;
        for (auto it = sortedEdgeArray.begin(); it != sortedEdgeArray.end(); ++it)
        {
            ss << "\t\""
               << it->getTreeNode().first->getName()
               << "\" -> \""
               << it->getTreeNode().second->getName()
               << "\";" << std::endl;
        }
        ss << "}";
        dot_content = ss.str();
    }

    void writeToFile(std::string fileName = "test.dot")
    {
        std::ofstream out(fileName);
        if (out.is_open())
        {
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