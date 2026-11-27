class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {

        int n = grid.size();

        if(n == 0 || grid[0][0] != 0) return false;

        int moveNo = 0;
        int rowFrom = 0;
        int colFrom = 0;

        int knightDir[8][2]={{-2,-1}, {-2,1}, {-1,-2}, {-1,2}, {1,-2}, {1,2}, {2,-1}, {2,1}};
        bool wasValid = true;
        while(wasValid){
            wasValid = false;
            for(int i=0;i<8;i++){
                int dr = knightDir[i][0];
                int dc = knightDir[i][1];

                int rowTo = rowFrom + dr;
                int colTo = colFrom + dc;
                if(isInBoard(rowTo, colTo, n)){
                    if(grid[rowTo][colTo] == (moveNo + 1)){
                        moveNo++;
                        rowFrom = rowTo;
                        colFrom = colTo;
                        wasValid = true;
                        break;
                    }
                }
            }
        }
        return moveNo == n*n -1;
    }
    bool isInBoard(int r, int c,int n){
        return r>=0 && r<n && c>=0 && c<n;
    }
};