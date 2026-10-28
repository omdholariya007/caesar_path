class Solution {
    int rec(vector<int>&nums , int i ,int sum ,vector<int>&dp){
        if(i >= nums.size())return sum;
        if(dp[i] != -1)return dp[i]; 

        int take = nums[i]+ rec(nums,i+2,sum,dp);
        int away = INT_MIN;

        if(i+1 < nums.size()) away = rec(nums,i+1,sum,dp);
        
        return  dp[i] = max(take,away);
    }
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);

        return rec(nums,0,0,dp);
    }
};