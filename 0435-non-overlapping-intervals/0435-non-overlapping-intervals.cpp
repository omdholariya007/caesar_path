class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& vec) {
        if(vec.size() == 0)return 0;
        sort(vec.begin(), vec.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1]; 
    });
    
    int last = INT_MIN ;
    int count = 0;
    for(int i = 0 ; i < vec.size() ; i++){
        if(vec[i][0]>=last){
            count++;
            last = vec[i][1];
        }

    }
    return vec.size()-count;
    }
};