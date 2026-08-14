class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int tsum = nums[0];
        int minsum = nums[0];
        int mincur = nums[0];
        int cur = nums[0];
        int m  = nums[0];
        for(int i = 1 ; i < nums.size() ;i++){
            cur = max(nums[i],cur+nums[i]);
            m = max(m,cur);

            mincur = min(nums[i],mincur+nums[i]);
            minsum = min(mincur,minsum);
            tsum+=nums[i];
        }
        if(tsum == minsum) return m;
        return max (m , tsum-minsum);
    }
};