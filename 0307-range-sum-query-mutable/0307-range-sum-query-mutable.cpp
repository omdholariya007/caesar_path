class NumArray {

    vector<int>nums;
public:
    NumArray(vector<int>& nums) {
        this->nums = nums;
        int sum = 0 ;
        for(int i = 0 ;i < nums.size();i++){
            sum+=nums[i];
           this-> nums[i]=sum;
        }
    }
    
    void update(int index, int val) {
        if(index == 0){
            int dif = val-nums[index];
            nums[index] = val;;
            for (int i = index+1 ; i <nums.size();i++){
                nums[i]+=dif;
            }
        }
        else {
            int dif = nums[index]-nums[index-1];
            dif = val -dif;
            
            nums[index] = nums[index-1]+val;;
            for (int i = index+1 ; i <nums.size();i++){
                nums[i]+=dif;
            }
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return nums[right];
        }
        else {
            int h = nums[right];
            int l = nums[left-1];
            return h-l;
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */