class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        vector<int>ans;
        int freqOfZeros=0;
        for(int x:nums){
            if(x==0){
                freqOfZeros++;
                continue;
            }
            product*=x;
        }
        for(int x:nums){
            if(freqOfZeros>1){
                ans.push_back(0);
            }
            else if(freqOfZeros==1){
                if(x==0) ans.push_back(product);
                else ans.push_back(0);
            }
            else ans.push_back(product/x);
        }
        return ans;
    }
};