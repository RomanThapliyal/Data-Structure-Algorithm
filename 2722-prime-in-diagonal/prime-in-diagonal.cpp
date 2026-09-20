class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int max=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i])&&max<nums[i][i]){max=nums[i][i];}
        }
        for(int i=0;i<n;i++){
            int j=n-1-i;
            if(isPrime(nums[i][j])&&max<nums[i][j]){max=nums[i][j];}
        }
        return max;
    }
    int isPrime(int n){
        if(n<2) return false;
        int sq=sqrt(n);
        for(int i=2;i<=sq;i++){
            if(n%i==0){return false;}
        }
        return true;
    }
};