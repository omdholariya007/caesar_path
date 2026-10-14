class Solution {
    int rec(vector<int>& ob,int i,int jump,int lane ,vector<vector<int>>&v){
        if( i == ob.size()-1 )return 0;
        if(v[i][lane] != -1)return v[i][lane];
        
        if(  ob[i+1] == lane){
            int one = INT_MAX;
            int two = INT_MAX;
            int three = INT_MAX;
            if(lane != 1 &&ob[i]!=1) one =1+ rec(ob,i+1,jump+1,1,v);
            if(lane != 2 && ob[i]!=2) two = 1+rec(ob,i+1,jump+1,2,v);
            if(lane != 3 && ob[i]!=3) three =1+ rec(ob,i+1,jump+1,3,v);
            return v[i][lane]= min (one,min(two,three));
            return min (one,min(two,three));
            
        }
        return v[i][lane] = rec(ob, i + 1, jump, lane, v);
    }
public:

    int minSideJumps(vector<int>& ob) {
        vector<vector<int>>v(ob.size(),vector<int>(4,-1));
       // vector<int>v(ob.size(),-1);
        return rec(ob,0,0,2,v);
    }
};