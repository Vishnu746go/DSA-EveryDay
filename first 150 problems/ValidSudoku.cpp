class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] ={false};
        bool col[9][9] = {false};
        bool sub_board[9][9]= {false};
        for(int r=0;r<9;r++){
            for(int c=0 ; c<9; c++){
                if(board[r][c]== '.'){
                    continue;
                }
                int index = board[r][c] - '0' - 1;
                int area = (r/3)*3 +(c/3);
                if(row[r][index] || col[c][index] || sub_board[area][index]){
                    return false;
                }
                row[r][index] = true;
                col[c][index] = true;
                sub_board[area][index] = true;
            }
        }
        return true;
    }
};