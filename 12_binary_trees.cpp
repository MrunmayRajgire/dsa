// Hierarchial Data Structure

// Subtree - node + everyone beneath

// 0 or 2 children of each node
#include <bits/stdc++.h>

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data =val;
        left=right=NULL;
    }
};

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(5);
}