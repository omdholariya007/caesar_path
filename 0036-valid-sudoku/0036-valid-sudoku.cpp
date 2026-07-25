class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0 ; i < 9 ; i++){
            vector<int>r = vector<int>(10,0);
            vector<int>c = vector<int>(10,0);
            vector<int>b = vector<int>(10,0);
            int cs = (i%3)*3 , ce =cs+ 3 ;
            int rs= (i/3)*3 ;
            for(int j = 0 ; j < 9 ; j++){
                if(board[i][j] != '.'&& r[board[i][j]-'0'] != 0)return false;
                if(board[j][i] != '.' && c[board[j][i]-'0'] != 0)return false;

                if(board[i][j] != '.')r[board[i][j]-'0'] = board[i][j]-'0';
                if(board[j][i] != '.')c[board[j][i]-'0'] = board[j][i]-'0';

                if(ce==cs){
                    cs = (i%3)*3;
                    rs++;
                }
                if(board[rs][cs] != '.'&& b[board[rs][cs]-'0'] != 0)return false;
                if(board[rs][cs]!= '.') b[board[rs][cs]-'0'] = board[rs][cs]-'0';
                cs++;
                
            }            
        }
        return true;
    }
};