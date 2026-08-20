class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
             sum = prices[prices.size()-1]-prices[0] ;
            for( int i =0 ; i<prices.size()-1 ; i++){
                if (prices[i] > prices[i+1]){
                    sum+=prices[i]-prices[i+1];
                }
            }
        return sum;
        
    }
};