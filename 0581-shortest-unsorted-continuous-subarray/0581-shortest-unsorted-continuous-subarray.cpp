class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size()<2 )return 0;
        int mx = INT_MIN, mn = INT_MAX;
        for(int i = nums.size()-1 ; i>0 ;i--){
           if(nums[i-1]>nums[i] ){
            if(nums[i-1] > mx)mx = nums[i-1];
            if(nums[i]<mn)mn = nums[i];
           } 
        }
        int st=0,end = nums.size();
        for(int i = 0 ; i <nums.size() ; i++){
            if(nums[i] > mn){
                st = i;
                break;
            }
            
        }
        if(mn == INT_MAX && mx == INT_MIN)return 0;
        for(int i = nums.size()- 1; i >= 0 ;i--){
            if (nums[i] < mx) {
                end = i;
                break;
            }
            
            
        }
        if(st == 0 && end == nums.size()-1)return nums.size();
        return max(0,end-st+1) ;
    }
};