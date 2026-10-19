class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int row=coordinates[0]-'a'+1;
        int col=coordinates[1]-'0';
        return row%2 != col%2;
    }
};