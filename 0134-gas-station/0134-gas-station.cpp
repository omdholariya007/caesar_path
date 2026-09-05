class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cur =0,tot = 0,in=0;
        for(int i = 0 ; i < gas.size() ; i++){
            int diff = gas[i]-cost[i];
            tot+=diff;
            cur +=diff;
            if(cur<0){
                cur = 0;
                in = i+1;
            }
        }
        if(tot >=0)return in;
        return -1;
    }
};