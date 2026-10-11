class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        int i=0;
        while(i<j){
            if(nums[i]==0){
                for(int k=i;k<n-1;k++){
                    nums[k]=nums[k+1];
                }
                nums[j]=0;
                j--;
            }
            if(nums[i]!=0) i++;
        }
    }
};