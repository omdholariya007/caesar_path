class Solution {
    int rec(vector<int>&cost,int i ,vector<int>&dp){
        if(i >= cost.size())return 0;
        if(dp[i] != -1) return dp[i];

        int two = INT_MAX;
        int one = cost[i] + rec(cost,i+1,dp);
        two = cost[i] + rec(cost,i+2,dp);
        return dp[i] = min(one,two);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        int a= rec(cost,1,dp);
        int b = rec(cost,0,dp);
        return min(a,b);
    }
};