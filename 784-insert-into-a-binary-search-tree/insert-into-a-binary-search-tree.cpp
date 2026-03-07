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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newnode=new TreeNode(val);
        if(root==NULL) return newnode;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->val>val && curr->left!=NULL){
                curr=curr->left;
            }
            else if(curr->val<val && curr->right!=NULL){
                curr=curr->right;
            }
            else{
                break;
            }
        }
        if(curr->val>val){
            curr->left=newnode;
        }
        else{
            curr->right=newnode;
        }
        return root;
    }
};