class Solution {
    int rec(vector<int>&nums , int t , int i,int count,int curr){
        if( i == nums.size() && curr == t)return count= count+1;
        if(i == nums.size())return 0;
 
        int add , sub;
        add = rec(nums,t,i+1,count,curr+nums[i]);
        sub =  rec(nums,t,i+1,count,curr-nums[i]);
        return add+sub;
    }
    
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        //        return rec(nums,target,0,0,0);
        //now we using 0/1 knapsack
        int sum  =0;
        for(int i : nums)sum+=i;
        if(abs(target) > sum)return 0;
        if((sum + target) %2 != 0)return 0;
        int s  = (sum+target) /2;
        vector<int>dp(s+1,0);
        dp[0]=1;
        for (int num : nums) {
            for (int j = s; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }

        return dp[s];
    }
};