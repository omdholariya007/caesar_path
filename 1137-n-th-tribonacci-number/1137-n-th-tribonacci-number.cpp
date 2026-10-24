class Solution {
    int rec(int n,int l ,int p,int c){
        if(n == 2)return c;
        int s = p+c+l;
        
        return rec(n-1,p,c,s);
    }
public:
    int tribonacci(int n) {
        if(n == 0 || n == 1)return n;
        if( n == 2)return 1;
        return rec(n,0,1,1);
    }
};