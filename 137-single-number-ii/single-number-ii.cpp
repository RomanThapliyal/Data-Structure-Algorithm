class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        for(int x:nums){
            if(freq[x]<3) return x;
        }
        return 0;
    }
};