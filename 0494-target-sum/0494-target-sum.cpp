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
        return rec(nums,target,0,0,0);
    }
};