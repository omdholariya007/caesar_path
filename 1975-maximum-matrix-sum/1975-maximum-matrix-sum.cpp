class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long count = 0,mn=INT_MAX;
        long long sum=0;
        for(int i = 0 ; i < matrix.size();i++){
            for(int j = 0 ; j <matrix[0].size() ;j++){
                if(matrix[i][j]<0)count++;
                if(abs(matrix[i][j]) < mn)mn = abs(matrix[i][j]);
                sum+=abs(matrix[i][j]);
            }
        }
        if(count%2!=0){
            sum-=(mn*2);
        }
        return sum;
    }
};