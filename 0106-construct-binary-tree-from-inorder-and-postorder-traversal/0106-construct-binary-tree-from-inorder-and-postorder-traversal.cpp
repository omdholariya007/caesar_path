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
    TreeNode* buildTree(vector<int>& in, vector<int>& p) {
        int i=in.size()-1, j = p.size()-1;
        TreeNode* root =nullptr;
        stack<TreeNode*>st;
        for( ; j>=0;j--){
            TreeNode * cur = new TreeNode(p[j]);
            if(!root)root = cur;
            TreeNode* g =nullptr ;
            while (!st.empty() && st.top()->val == in[i]){
                g=st.top();
                st.pop();
                i--;
            }
            if(g){
                g->left = cur;
            }
            else if (!st.empty() && st.top()->val != in[i]){
                st.top()->right = cur;
            }
            st.push(cur);
        }
        return root;
    }
};