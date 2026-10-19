class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        
        int rookRow,rookCol;
        for(int row=0;row<8;row++){
            for(int col=0;col<8;col++){
                if(board[row][col]=='R'){
                    rookRow=row;
                    rookCol=col;
                    break;
                }
            }
        }

        int rookDirs[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
        int pawnCaptures=0;

        for(int i=0;i<4;i++){
            int row=rookRow+rookDirs[i][0];
            int col=rookCol+rookDirs[i][1];
            while(row>=0&&row<8 && col>=0&&col<8){
                if(board[row][col]=='p'){
                    pawnCaptures++;
                    break;
                }
                else if(board[row][col]=='B'){
                    break;
                }
                row+=rookDirs[i][0];
                col+=rookDirs[i][1];
            }
        }
        return pawnCaptures;
    }
};