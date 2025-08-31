class Solution {
public:
    bool isvalidrow(vector<vector<char>>& grid,int r , int c){
        for(int j=0;j<9;j++){
            if(j!=c && grid[r][j]==grid[r][c]) return false;
        }
        return true;
    }

    bool isvalidcol(vector<vector<char>>& grid,int r , int c){
        for(int i=0;i<9;i++){
            if(i!=r && grid[i][c]==grid[r][c]) return false;
        }
        return true;
    }

    bool isvalidmatr(vector<vector<char>>& grid,int r , int c){
        int sr = r - (r % 3), sc = c - (c % 3);
        for(int i = sr; i < sr + 3; i++){
            for(int j = sc; j < sc + 3; j++){
                if((i!=r || j!=c) && grid[i][j]==grid[r][c]) return false;
            }
        }
        return true;
    }

    bool isvalid(vector<vector<char>>& grid,int r , int c){
        return isvalidmatr(grid,r,c) && isvalidcol(grid,r,c) && isvalidrow(grid,r,c);
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char val ='1'; val<='9'; val++){   // ✅ FIXED RANGE
                        board[i][j] = val;
                        if(isvalid(board,i,j) && solve(board)) return true;
                        board[i][j] = '.';  // backtrack
                    }
                    return false;  // no valid number found
                }
            }
        }
        return true;  // board filled
    }
};
