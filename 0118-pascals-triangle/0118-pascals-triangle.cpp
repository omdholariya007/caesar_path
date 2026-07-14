class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a;
        if(numRows == 1)return {{1}};
        vector<int>v={1},t;
        a.push_back(v);
        for(int i = 1 ; i < numRows ;i++){
            t.push_back(1);
            for(int j = 0;j+1 < v.size() ;j++){
                t.push_back(v[j]+v[j+1]);
            }
            t.push_back(1);
            a.push_back(t);
            v=t;
            t={};
        }
        return a;
    }
};