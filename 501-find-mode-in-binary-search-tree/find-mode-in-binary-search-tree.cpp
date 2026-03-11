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
    vector<int> findMode(TreeNode* root) {
        map<int,int>mp;
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root);
        int maxi=0;
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                mp[q.front()->val]++;
                maxi=max(maxi,mp[q.front()->val]);
                if(q.front()->left!=NULL){
                    q.push(q.front()->left);
                }
                if(q.front()->right!=NULL){
                    q.push(q.front()->right);
                }
                q.pop();
            }
            // res.push_back(maxi);
        } 
        vector<int>ans;
        for(auto i:mp){
            if(i.second==maxi){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};