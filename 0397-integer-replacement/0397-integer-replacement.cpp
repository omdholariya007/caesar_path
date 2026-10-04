class Solution {
    int rec(unsigned int n,int count ){
        if(n == 1)return count;
        if(n%2 == 0)return rec(n/2,count+1);
        int s = rec(n-1,count+1);
        int b = rec(n+1,count+1);
        return min(s,b);
    }
public:
    int integerReplacement(int n) {
        return rec(n,0);
    }
};