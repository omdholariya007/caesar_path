class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> v;
        vector<vector<int>> x(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                x[i][j] = matrix[i-1][j-1] ^ x[i-1][j] ^ x[i][j-1]^ x[i-1][j-1];
                v.push_back(x[i][j]);
            }
        }

        sort(v.rbegin(), v.rend());

        return v[k-1];
    }
};