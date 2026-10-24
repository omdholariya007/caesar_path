class Solution {
public:
    vector<int> getRow(int r) {
        vector<vector<int>>v;
        v.push_back({1});
        for(int i = 1 ; i <= r ; i++ ){
            vector<int>d ;
            d.push_back(1);
            for(int j = 0 ; j < v[i-1].size()-1;j++ ){
                int t = v[i-1][j]+v[i-1][j+1];
                d.push_back(t);
            }
            d.push_back(1);
            v.push_back(d);
        }
        return v[r];
    }
};