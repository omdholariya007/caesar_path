class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int s = 0;
        for(int i = 0;i<nums.size() ;i++){
            s=s^nums[i];
        }
        unsigned int bi = (unsigned int)s & -(unsigned int)s;
        int a = 0  ,b =0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] & bi){
                a^=nums[i];
            }
            else b^=nums[i];
        }
        return {a,b};
    }
};