class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        vector<vector<int>>v(2,vector<int>(colsum.size()));
        int i = 0;
        for(int i = 0 ; i < colsum.size() ;i++){
            if(colsum[i] == 2){
                if(upper <= 0 || lower <=0)return {};
                upper--;
                lower--;
                v[0][i] = 1;
                v[1][i]=1;
            }
            // if(colsum[i]>2)return {};
        }
        for(int i = 0 ; i < colsum.size() ;i++){
            if(colsum[i] == 1){
                if(upper){
                    upper--;
                    v[0][i]=1;
                }
                else if (lower){
                    lower--;
                    v[1][i]=1;
                }
                else return {};
            }
        }  
        if(lower || upper)return {}; 
        return v;        
    }
};