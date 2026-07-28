class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        bool exist = 0;
        for(int i = 0 ; i<matrix.size() ;i++){
            int r = 0 ,er = matrix[0].size() -1;
            while (r<=er){
                int m = (r+er)/2;
                if(matrix [i][m] == target)return 1;
                else if(matrix[i][m]>target) er = m-1;
                else r= m+1;
            }
        }
        return 0;
    }
};