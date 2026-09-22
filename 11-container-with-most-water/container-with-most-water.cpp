class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int n=height.size();
        int left=0,right=n-1;
        while(left<=right){
            int area=min(height[left],height[right])*abs(left-right);
            maxArea=max(maxArea,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};