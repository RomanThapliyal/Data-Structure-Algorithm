class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int sum=0;

        for(auto &row : grid){sort(row.begin(),row.end());}

        for(int j=0;j<grid[0].size();j++){
            int max=INT_MIN;
            for(int i=0;i<grid.size();i++){
                if(max<grid[i][j]){max=grid[i][j];}
            }
            sum+=max;
        }
        return sum;
    }
};