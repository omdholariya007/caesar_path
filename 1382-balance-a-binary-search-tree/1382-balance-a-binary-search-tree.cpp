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
    TreeNode* rec( vector<int>&nums , int l ,int h){
        if(l > h )return nullptr ;
        TreeNode* root = new TreeNode(nums[(l+h)/2]);
        root->left = rec(nums,l, ((l+h)/2)-1 );
        root->right = rec(nums,((l+h)/2)+1,h );
        return root;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        st.push(root);
        while (!st.empty()){
            root = st.top();
            st.pop();
            v.push_back(root->val);
            if(root->left){
                st.push(root->left);
            }
            if(root->right)st.push(root->right);

        }
        sort(v.begin(),v.end());
 
        return rec(v,0,v.size()-1);
        
    }
};