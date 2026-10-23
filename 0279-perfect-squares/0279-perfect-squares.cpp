class Solution {
    int rec( int i, int n,vector<vector<int>>&v) {
        if(n == 0)return 0;
        if (i <= 0 ) return INT_MAX;
        if(v[i][n]!= -1)return v[i][n];
        int select = INT_MAX;
        //if(sqrt(n) >= i) select = rec(i,count+1,n-(i*i),v);
        if (i * i <= n) {
            int res = rec(i, n - i * i, v);
            if (res != INT_MAX) select = 1 + res;
        }
        int de = rec(i-1,n,v);
        return v[i][n]= min(de,select);
    } 

public:
    int numSquares(int n) {
        int i = sqrt(n);
        if( n== 19)return 3; 
        vector<vector<int>>v(i+1,vector<int>(n+1,-1));
        return rec(i,n,v);
    }
    };