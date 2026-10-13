class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        unordered_map<int,int>mp;
        for(auto &n:rs){
            mp[n[0]] |= (1<<n[1]);

        }
        int l = 960 , m = 240,r=60;
        int count = (n-(int)mp.size())*2;
        
        for(auto &[row,col] : mp){
            bool le = (col & l)==0;
            bool ri = (col & r) == 0;
            bool mid = (col & m)==0;
            if(le && ri)count+=2;
            else if (le|| ri || mid)count++;
        }
        return count;
    }
};