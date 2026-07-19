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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = new  TreeNode(nums[(nums.size()-1)/2]) ;
        if(nums.size() < 2) return root;

        int l = 0, r=nums.size()-1;
            stack<tuple<TreeNode*,int,int>>st;
            st.push({root,0,r});
            while(!st.empty()){  
                auto [d,l,r] = st.top();
                st.pop();
                int mid = (l+r)/2;
                if( mid > l ){
                    int h1 = ((l+r)/2)-1;
                    d->left = new TreeNode(nums[(l+h1)/2]);
                    st.push({d->left,l,h1});
                }
                if( mid < r){
                    int l2= ((l+r)/2)+1;
                    d->right = new TreeNode(nums[(l2+r)/2]);
                    st.push({d->right,l2,r});
                }
                
            }
        return root;
    }
};