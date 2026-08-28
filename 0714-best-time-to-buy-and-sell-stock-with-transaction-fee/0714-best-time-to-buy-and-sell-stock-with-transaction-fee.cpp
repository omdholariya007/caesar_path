class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int prof = 0;
        int sum = 0;
        int l = prices[0],h=prices[0];  
        for(int i = 1 ; i < prices.size() ;i++){
             if(prices[i] > h) h= prices[i];
             else{
                if(prices[i] < h-fee || prices[i] < l){
                    if(h-l-fee>=0){
                        prof += h-l-fee;
                    }
                    l = prices[i];
                    h=prices[i];
                }
             }
             if( i  == prices.size()-1){
                if (h-l-fee>0)prof+=h-l-fee;
             }
             
        }
        return prof;
    }
};