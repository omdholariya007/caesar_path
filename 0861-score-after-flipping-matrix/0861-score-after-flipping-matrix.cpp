class Solution {
    int rec(vector<vector<int>>& grid){
        int s = 0;
        for(int i = 0 ; i < grid.size();i++){
            int p = 0,f=0;;
            for(int j = grid[0].size()- 1; j>=0 ;j--){
                f+=(pow(2,p)*grid[i][j]);
                p++;
            }
            s+=f;
        }
        return s;
    }
public:
    int matrixScore(vector<vector<int>>& grid) {
        for(int i = 0 ; i < grid.size() ; i++){
            if(grid[i][0]==0){
                for(int j = 0;j<grid[0].size() ;j++){
                    if(grid[i][j]==0)grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        for(int i = 1 ; i < grid[0].size() ;i++){
            int count = 0;
            for(int j = 0;j<grid.size() ;j++){
                if(grid[j][i] == 1)count++;
            }
            if(count <= grid.size()/2){
                for(int j = 0 ; j < grid.size() ;j++){
                    if(grid[j][i]==1)grid[j][i]=0;
                    else grid[j][i]=1;
                }
            }
        }

        return rec(grid);
    }
};