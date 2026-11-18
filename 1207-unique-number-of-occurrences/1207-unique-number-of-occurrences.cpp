class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_map<int,int>val;
        for(int i = 0 ; i<arr.size();i++) mp[arr[i]]++;
        for(auto [k,v] : mp){
            if(val.contains(v))return 0;
            val[v]++;
        }
        return 1;
    }
};