class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for(int j=0;j<matrix[0].size();j++){
            int max=INT_MIN;
            for(int i=0;i<matrix.size();i++){
                if(max<matrix[i][j]){max=matrix[i][j];}
            }
            for(int i=0;i<matrix.size();i++){
                if(matrix[i][j]==-1){matrix[i][j]=max;}
            }
        }
        return matrix;
    }
};