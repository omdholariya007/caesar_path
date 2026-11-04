class Solution {
    int rob(vector<int>&nums ,vector<vector<int>>& dp,int i,bool f ){
        if(i >= nums.size())return 0;
        if(dp[i][f] != -1)return dp[i][f];
        int select =0;
        if (!(i == nums.size() - 1 && f == 1)) 
        select = nums[i] + rob(nums,dp, i + 2,(i == 0 ? 1 : f) );

        int d = rob(nums,dp,i+1,f);
        return dp[i][f] = max(select,d);
    }
public:
    int rob(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(2,-1));
        return rob(nums,dp,0,0);
    }
};