class Solution {
    int rec(int m,int n,int count,int i,int j,vector<vector<int>>&dp){
        if( i == m-1 && j == n-1)return count+1;
        if(dp[i][j]!= -1)return dp[i][j];
        int one = 0,second = 0;
        if(i<m-1) one = rec(m,n,count,i+1,j,dp);
        if(j<n-1) second = rec(m,n,count,i,j+1,dp);
        return dp[i][j]=second+one;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return rec(m,n,0,0,0,dp);
    }
};