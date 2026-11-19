class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v(nums.size());
        int l = nums.size()-1;
        int f = 0;
        for(int i = 0 ; i < nums.size() ;i++){
            if(nums[i]== 0){
                v[l] = nums[i];
                l--;
            }
            else {
                v[f] = nums[i];
                f++;
            }
        }
        nums = v;
    }
};