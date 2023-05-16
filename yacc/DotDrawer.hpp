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
    int priority = 0;
    int depth = 0;
    string name;
    vector<string> sequence;
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

    // void sortChild()
    // {
    //     for (auto node : this->childNodes)
    //     {
    //         for (auto it = this->sequence.begin(); it != this->sequence.end(); ++it)
    //         {
    //             if (*it == node->name)
    //             {
    //                 priority = it - this->sequence.begin();
    //                 break;
    //             }
    //         }
    //     }

    //     sort(this->childNodes.begin(), this->childNodes.end(), [](TreeNode &tn1, TreeNode &tn2)
    //          { return tn1.priority < tn2.priority; });
    // }

    string getName()
    {
        return name + " (" + to_string(depth) + ")(" + to_string(idx)+")";
    }
};


class Edge
{
public:

    Edge(TreeNode n1, TreeNode n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }

    void setEdge(TreeNode n1, TreeNode n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }

    std::pair<TreeNode, TreeNode> getTreeNode()
    {
        return std::make_pair(this->n1, this->n2);
    }

private:
    TreeNode n1; // father
    TreeNode n2; // child
};

class Tree
{
public:
    TreeNode* rootNode;

    Tree(){

    }

    void sortTree()
    {
        queue<TreeNode*> q;
        q.push(rootNode);

        while (!q.empty())
        {
            auto treeNode = q.front();
            q.pop();
            // treeNode->sortChild();
            for (auto childNode : treeNode->childNodes)
            {
                q.push(childNode);
            }
        }
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

    int getTreeDepth()
    {
        queue<TreeNode*> q;
        q.push(rootNode);
        int max_depth = rootNode->depth;
        while (!q.empty())
        {
            auto treeNode = q.front();
            q.pop();
            max_depth = max(max_depth, treeNode->depth);
            for (auto childNode : treeNode->childNodes)
            {
                q.push(childNode);
            }
        }
        return max_depth;
    }

    vector<TreeNode*> getLowestNodes()
    {
        updateNodeDepth();
        int treeDepth = getTreeDepth();
        vector<TreeNode*> res;
        queue<TreeNode*> q;
        q.push(rootNode);
        while (!q.empty())
        {
            auto treeNode = q.front();
            q.pop();
            if (treeNode->depth == treeDepth)
            {
                res.push_back(treeNode);
            }
            for (auto childNode : treeNode->childNodes)
            {
                q.push(childNode);
            }
        }
        return res;
    }

    vector<pair<TreeNode, int>>::iterator get_pair_vector_iterator(vector<pair<TreeNode, int>> &v, TreeNode item)
    {
        auto it = v.begin();
        for (; it != v.end(); it++)
        {
            if (it->first.name == item.name && it->first.depth == item.depth)
            {   
                //出现冲突，即在同一层且同名
                return it;
            }
        }
        return it;
    }

    void update_node_idx(vector<pair<TreeNode, int>> &stored_name_times, TreeNode& treeNode)
    {
        auto it = get_pair_vector_iterator(stored_name_times, treeNode.name);
        if (it == stored_name_times.end())
        {
            // 没有找到，加进去
            stored_name_times.push_back(make_pair(treeNode, 0));
        }
        else
        {
            treeNode.idx = ++it->second;
        }
    }

    vector<Edge> getSortedSequence()
    {
        // step1: 排序
        // sortTree();
        // step2: 更新节点depth
        updateNodeDepth();
        // step3：先序遍历树，并重命名节点
        vector<Edge> res;
        queue<TreeNode*> q;
        vector<pair<TreeNode, int>> stored_name_times;
        q.push(rootNode);
        while (!q.empty())
        {
            auto treeNode = q.front();
            q.pop();
            update_node_idx(stored_name_times, *treeNode);
            for (auto childNode : treeNode->childNodes)
            {
                update_node_idx(stored_name_times, *childNode);
                Edge e(*treeNode, *childNode);
                res.push_back(e);
                q.push(childNode);
            }
        }

        return res;
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

        std::stringstream ss;
        ss << "digraph tree {" << std::endl;
        ss << "\tfontname = \"" << this->fontname << "\"" << std::endl;
        ss << "\tfontsize = " << this->fontsize << std::endl;
        ss << "\tnode[shape = \"" << this->shape << "\"]" << std::endl
           << std::endl;
        for (auto it = sortedEdgeArray.begin(); it != sortedEdgeArray.end(); ++it)
        {
            ss << "\t\""
               << it->getTreeNode().first.getName()
               << "\" -> \""
               << it->getTreeNode().second.getName()
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