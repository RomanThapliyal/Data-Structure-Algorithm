class Solution {
public:
    bool squareIsWhite(string coordinates) {
        //97=a
        int row=98-coordinates[0];
        int col=coordinates[1];
        if((row%2==0&&col%2==0) || (row%2!=0&&col%2!=0)){
            return false;
        }
        return true;
    }
};