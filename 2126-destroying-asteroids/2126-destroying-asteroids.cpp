class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& ass) {
        sort(ass.begin(),ass.end());
        long long mass =m;
        for(int i = 0 ; i < ass.size();i++){
            if(ass[i]>mass)return 0;
            mass+=ass[i];
        }
        return true;
    }
};