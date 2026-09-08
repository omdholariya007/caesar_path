class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int  c=0,n=piles.size();
        if(piles.size() <3)return 0;
        for(int i = n-2 ; i>=n/3 ;i-=2){
            c+=piles[i];

        } 
        return c; 
    }
};