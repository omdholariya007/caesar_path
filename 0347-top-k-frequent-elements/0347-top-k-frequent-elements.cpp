class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i : nums){
            mp[i]++;
        }
        vector<vector<int>>v(k,vector<int>(2,INT_MIN));
        int j =0;

        for(auto i = mp.rbegin() ; i !=mp.rend() && k>0;i++){
            
            if(i->second > v[0][0]){
                v[0][1]=i->first;
                v[0][0]=i->second;
                sort(v.begin(),v.end());
                j++;
            }
        }
        vector<int>s;
        for(int i = 0 ; i < v.size();i++){
            s.push_back(v[i][1]);
        }
        return s;
    }
};