class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v(nums.size());
    
        for (int i = 0 ; i < nums.size() ;i++){
            k = k%nums.size();
            v[k]=nums[i];
            k++;
        }
        nums=v;
        return ;
    }
};