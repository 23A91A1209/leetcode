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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        int i=0,c,ans=INT_MIN;
        if(root!=NULL) q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>res;
            i++;
            int sum=0;
            for(int i=0;i<s;i++){
                res.push_back(q.front()->val);
                sum+=q.front()->val;

                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                q.pop();
            }
            if(ans<sum){
                ans=sum;
                c=i;
            }
            
        }
        return c;
    }
};