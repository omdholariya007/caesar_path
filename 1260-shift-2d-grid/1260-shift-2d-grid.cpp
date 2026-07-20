class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
     
     for(int i = 0 ; i < k;i++  ){
        int d = grid[grid.size()-1][grid[0].size()-1];
        for(int j = 0 ; j < grid.size() ; j++){
            for(int m = 0 ; m <grid[0].size() ;m++ ){
                swap(d,grid[j][m]);
            }
        }
     }   
     return grid;
    }
};