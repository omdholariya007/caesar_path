class Solution {
    int rec(int n , int count,int run,int limit){
        if(n<=0)return count;
        if(run >= limit)return rec(n,count,1,limit+1);
        return rec(n-run,count+1,run+1,limit);

        
    }
public:
    int minimumBoxes(int n) {
        return rec(n,0,1,1);
    }
};