class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=nums[i];
            int s=0;
            while(temp>0){
                s+=temp%10;
                temp/=10;
            }
            if(s==i) return i;
        }
        return -1;
    }
};