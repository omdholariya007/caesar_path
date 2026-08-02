class Solution {
public:
    int climbStairs(int n) {
        if(n <=3 ) return n;
        int a =2,b=3,s;
        for(int i = 4 ; i <= n ; i++){
            s=a+b;
            a=b;
            b=s;
        }
        return s;
    }
};