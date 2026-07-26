class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long long a=INT_MIN,b=INT_MIN,c=INT_MIN,n1=INT_MAX,n2=INT_MAX;
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i]>c){
                a=b;
                b=c;
                c=nums[i];
            }
            else if(nums[i]>b){
                a=b;
                b=nums[i];
            }
            else if(nums[i]>a)a=nums[i];

                if(nums[i]<n1){
                    n2 = n1;
                    n1=nums[i];
                }
                else if(nums[i]<n2)n2=nums[i];
            }
        return  max(a*b*c,c*n1*n2);
    }
};