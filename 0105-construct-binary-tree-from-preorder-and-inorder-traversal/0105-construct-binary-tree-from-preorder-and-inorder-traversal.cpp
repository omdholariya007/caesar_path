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
    TreeNode* buildTree(vector<int>& p, vector<int>& in) {
        TreeNode* root = nullptr;
        stack<TreeNode*> st;
        int j = 0;

        for (int i = 0; i < p.size(); i++) {
            TreeNode* cur = new TreeNode(p[i]);
            if(root == nullptr)root = cur;

            TreeNode* g = nullptr;
            while (!st.empty() && st.top()->val == in[j]){
                g = st.top();
                st.pop();
                j++;
            }
            if(g){
                g->right = cur;
            }
            else if(!st.empty()) {
                st.top()->left = cur;
            }
            st.push(cur);
        }

        return root;
    }
};