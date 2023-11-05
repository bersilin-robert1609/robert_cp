#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
    int data;
    int bal_fact, height;
    Node *left, *right, *parent;
public:
    Node(int data)
    {
        this->data = data;
        this->height = this->bal_fact = 0;
        this->left = this->right = this->parent = nullptr;
    }
};

class BST
{
private:
    Node* root;
    int total_nodes;
public:
    BST()
    {
        this->root = nullptr;
        this->total_nodes = 0;
    }

    void insert(int num)
    {
        Node* new_node = new Node(num);

        if(root == nullptr)
        {
            root = new_node;
            total_nodes++;
            return;
        }

        Node* temp = root;
    }
};