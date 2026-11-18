class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()==0) {
            return ;
        }
        int count0 = 0,count2 =nums.size()-1,n=nums.size();
        for(int i = 0 ; i < n; ){
            if(nums[i]==0){
                int swap = nums[count0];
                nums[count0]=nums[i];
                nums[i]=swap;
                count0++;
                i++;
            }
            else if(nums[i]==2){
                int swap = nums[count2];
                nums[count2] = nums[i];
                nums[i] = swap;
                count2--;
                n-=1;
            }
            else i++;
        }
    }
};