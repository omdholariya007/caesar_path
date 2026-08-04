class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        if(prices.size() <2)return 0;
        int diff = prices[1]-prices[0];
        for(int i :prices){
            if(i < min)min = i;
            if(i-min > diff)diff = i-min;
        }
        return diff;
    }
};