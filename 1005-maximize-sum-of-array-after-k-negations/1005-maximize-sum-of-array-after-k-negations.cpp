class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        int sum = 0;
        for (int i = nums.size()-1; i >=0; i--) {
            
            if (nums[i] < 0 && k > 0) {
                nums[i] = abs(nums[i]);
                sum += nums[i];
                k--;
            }
            else sum+=nums[i];
            
            
        }
        sort(nums.begin(),nums.end());
        if(k%2 != 0)sum -= (nums[0])*2;
        return sum;
    }
};