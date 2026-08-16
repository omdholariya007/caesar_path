class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }

    TreeNode* solve(vector<int>& nums, int l, int r) {
        if (l > r)
            return NULL;

        int mx = l;

        for (int i = l; i <= r; i++) {
            if (nums[i] > nums[mx])
                mx = i;
        }

        TreeNode* root = new TreeNode(nums[mx]);

        root->left = solve(nums, l, mx - 1);
        root->right = solve(nums, mx + 1, r);

        return root;
    }
};