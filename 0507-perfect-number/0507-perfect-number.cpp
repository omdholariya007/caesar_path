class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>v;
        int s =0;
        if(num == 1)return 0;
        for(int i = 1 ; i <= sqrt(num) ;i++){
            if(num%i==0){
                s+=i;
            if(i!=1)s+=num/i;
            }
        }
        if(s == num )return 1;
        return 0;
    }
};