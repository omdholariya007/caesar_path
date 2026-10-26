class Solution {
    int rec(int i, int j , int count ,vector<vector<int>>&dp,vector<vector<int>>& grid){
        if(i == grid.size()-1 && j == grid[0].size()-1)return grid[i][j];
        if(dp[i][j]!= -1)return dp[i][j];
        long long select = 1e6,d = 1e6;
        if(i <grid.size()-1) select = rec(i+1,j,count+grid[i][j],dp,grid);
        if(j<grid[0].size()-1) d = rec(i,j+1,count+grid[i][j],dp,grid);
        
        return dp[i][j] =grid[i][j]+ min(select , d);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        //return rec(0,0,0,dp,grid);


        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ;j++){
                long long select = 1e6 , d = 1e6;
                if(i == 0 && j == 0) dp[i][j] = grid[i][j];
                else {
                    if(i > 0) select = dp[i-1][j];
                    if(j > 0)d = dp[i][j-1];
                    dp[i][j] = grid[i][j]+min(select,d);
                }
                

            }
        }
        return dp[grid.size()-1][grid[0].size()-1];
    }
};