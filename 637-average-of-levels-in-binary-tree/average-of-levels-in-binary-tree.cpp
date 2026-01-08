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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        if(root!=NULL) q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>res;
            for(int i=0;i<s;i++){
                res.push_back(q.front()->val);
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                q.pop();
            }
            ans.push_back(res);
        }
        vector<double>result;
        for(int i=0;i<ans.size();i++){
            vector<int>h=ans[i];
            long long sum=0;
            for(int j=0;j<h.size();j++){
                cout<<h[j]<<" "<<endl;
                sum+=h[j];
            }
             result.push_back((double)sum/h.size());
        }
        return result;
    }
};