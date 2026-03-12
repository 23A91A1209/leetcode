/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minheight(TreeNode* root){
        if(root==NULL) return 0;
        int left=minheight(root->left);
        int right=minheight(root->right);
        if(root->left==NULL) return 1+right;
        if(root->right==NULL)return 1+left;
        return 1+min(left,right);
    }
     int minDepth(TreeNode* root) {
        return minheight(root);
    }
};