class Solution {
    
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>c(grid.size(),INT_MIN);
        vector<int>r(grid.size(),INT_MIN);
        for(int i =0 ; i < grid.size() ;i++){
            for(int j = 0 ;j < grid.size();j++){
                c[i]=max(c[i],grid[j][i]);
                r[i]=max(r[i],grid[i][j]);
            }
        }
        int cost =0;
        for(int i = 0 ; i < grid.size() ;i++){
            for(int j = 0 ; j < grid.size() ;j++){
                int x = min(c[j],r[i]);
                cost+= x-grid[i][j];
            }
        }
        return cost;
    }
};