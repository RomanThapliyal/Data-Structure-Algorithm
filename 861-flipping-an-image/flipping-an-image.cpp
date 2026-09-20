class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<(n+1)/2;j++){
                int k=n-1-j;
                swap(image[i][j],image[i][k]);
                image[i][j]=1-image[i][j];
                if(j!=k){image[i][k]=1-image[i][k];}
            }
        }
        return image;
    }
};