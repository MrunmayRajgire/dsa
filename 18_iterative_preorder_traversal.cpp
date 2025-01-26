//root->left->right
/*using stack data structure
LIFO => LAST IN FIRST OUT

take stack
take root, push in stack
pop stack to get the root, push its right and then left
pop again, push ITS right and left
when nothing is in left or right, take the element below the top in stack
at the end, stack becomes empty.
*/

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root == NULL) return preorder;

        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            root = st.top();
            st.pop();
            preorder.push_back(root->val);
            if(root->right!=NULL)
            {
                st.push(root->right);
            }
            if(root->left!=NULL)
            {
                st.push(root->left);
            }
        }
        return preorder;
    }
};