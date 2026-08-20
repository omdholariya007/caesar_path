class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = prices[0] , h = prices[0] ;
        int count = 0;
        for(int i = 1; i <prices.size();i++){
            if(prices[i]>h){
                count+=prices[i]-h;
                h=prices[i];
            }
            if(h>prices[i]){
                l=prices[i];
                h=l;

            }
        }
        return count;
    }
};