class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int col[2];
        for(int i : bills){
            if(i == 5)col[0]++;
            else if (i == 10){
                if(col[0]<=0)return false;
                col[1]++;
                col[0]--;
            }
            else{
                if(col[0] <=0)return false;
                if(col[1]<=0){
                    if(col[0]<3)return false;
                    else col[0]-=3;
                    continue;
                }
                else {
                    col[1]--;
                    col[0]--;
                }

            }
        }
        return true;
    }
};