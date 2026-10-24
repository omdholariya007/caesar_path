class Solution {
    int rec ( vector<int>& coins, int amt,int i,int count,vector<vector<int>>&memo ){
        if(amt ==0) return 0;
        if(amt < 0)return 1e9;
        if(i == coins.size())return 1e9;
        if(memo[i][amt]!=-1)return memo[i][amt];
        
        
        int c = coins[i];
        if(amt<c)return rec(coins,amt,i+1,count,memo);
        long long select = rec(coins,amt-c,i,count+1,memo);
        if(select != 1e9) select+=1;
        long long de = rec(coins,amt,i+1,count,memo);
        return memo [i][amt] = min(de,select);;
        
    }
public:
    int coinChange(vector<int>& coins, int amt) {
        sort(coins.rbegin(),coins.rend());
        vector<vector<int>>memo(coins.size(),vector<int>(amt+1,-1));
        long long d = rec(coins,amt,0,0,memo) ;
        return d>=1e9 ? -1 : d;

    }
};