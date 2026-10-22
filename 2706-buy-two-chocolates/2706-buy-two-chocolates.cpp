class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
    int one  = INT_MAX , two = INT_MAX ;
    for(int i = 0 ; i < prices.size() ; i++){
        if(prices[i] <one){
            two = one;
            one = prices[i];
        }
        else if ( prices[i] < two){
            two = prices[i];
        }
    }
    if(one + two > money )return money;
    return money - one -two;
    }
};