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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            long long s=q.size();
            long long sum=0;
            for(int i=0;i<s;i++){
                 sum+=q.front()->val;
                 if(q.front()->left!=NULL){
                    q.push(q.front()->left);
                 }
                 if(q.front()->right!=NULL){
                    q.push(q.front()->right);
                 }
                 q.pop();
            }
            ans.push_back(sum);
        }
        sort(ans.rbegin(),ans.rend());
        long long largest_sum=-1;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
            if((i+1)==k){
                largest_sum=ans[i];
            }

        }
        return largest_sum;
    }
};