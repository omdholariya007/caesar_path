class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<vector<int>>v;
        for(int i = 0 ; i < profits.size() ;i++){
            v.push_back({capital[i],profits[i]});
        }
        sort(v.begin(),v.end());
        int cap=w;
        multiset<pair<int,int>>s;
        int j =0;
        for(int i = 0 ; i < k ; i++){
            for( ;  j<v.size() && v[j][0]<= cap;j++){
                s.insert({v[j][1], v[j][0]});
            }
            if(s.empty())break;
            auto it = prev(s.end());
            cap+=it->first;
            s.erase(it);
        }
        return cap;
    }
};