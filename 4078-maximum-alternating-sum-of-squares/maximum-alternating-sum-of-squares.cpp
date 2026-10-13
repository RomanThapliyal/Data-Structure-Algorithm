class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long maxSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) nums[i]=-nums[i];
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            maxSum-=nums[i]*nums[i];
        }
        for(int i=n/2;i<n;i++){
            maxSum+=nums[i]*nums[i];
        }
        return maxSum;
    }
};