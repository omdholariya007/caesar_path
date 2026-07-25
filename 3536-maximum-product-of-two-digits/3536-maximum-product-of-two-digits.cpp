class Solution {
public:
    int maxProduct(int n) {
        int o = 0 , y = 0;
        for( ; n > 0; n/=10){
            if(n%10 > y) {
                o = y;
                y = n%10;
            }
            else if(n%10>o) o = n%10;
        }
        return o*y;
    }
};