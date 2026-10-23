// lengendre's three square theorem 
// n = (4^a)(8b+7) here 7 is remainder if reminder is 7 
// then not able to satisfy in 3 numbers
class Solution {
public:
    int numSquares(int n) {
        int root = sqrt(n);
        if(root*root == n)return 1;
        for(int i = 1 ; i*i <=n ; i++){
            int s = n- i*i;
            int sq = sqrt(s);
            if (s == sq*sq) return 2;

        }
        int a =0,b=0;
        while (n%4 == 0 ){
            //count++;
            n/=4;
        }
        if(n%8 != 7)return 3;

        return 4;
    }
};