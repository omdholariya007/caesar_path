class Solution {
public:
    bool rec(vector<int>& nums, int i, int count) {
        if (i >= nums.size() - 1) return true;

        int in = i;
        int max_reach = i + nums[i];

        for (int j = i + 1; j < nums.size() && j <= nums[i] + i; j++) {
            if(j == nums.size()-1)return count+1;
            if (nums[j] + j >= max_reach) {
                max_reach = nums[j] + j;
                in = j;
            }
        }
        if(nums[in] == 0 && in != nums.size()-1)return false;
        if (in == i) in = i + nums[i];

        return rec(nums, in, count + 1);
    }

    bool canJump(vector<int>& nums) {
        int count = 0, i = 0;
        return rec(nums, i, count);
    }
};