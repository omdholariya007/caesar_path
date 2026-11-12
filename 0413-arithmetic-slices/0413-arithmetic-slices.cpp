class Solution {
    
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int>v;
        if(nums.size()<3)return 0;
        for(int i = 0 ; i < nums.size()-1 ;i++){
            v.push_back((nums[i+1]-nums[i]));
        }
        int count = 0;
        int d = 1;
        for(int i = 1 ; i < v.size();i++){
            if(v[i] == v[i-1])d++;
            if(v[i] != v[i-1] || i >=v.size()-1 ){
    
                if(d >= 2){
                    d--;
                    count += (d*(d+1))/2;
                }
                d=1;
            }
            
        }
        return count;
    }
};