class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int n = nums.size();

        if(n == 0){
            return ans;
        }
        int start = nums[0];
        for(int i=1;i<=n;i++){
            bool endOfRange = (i==n) || (nums[i] != nums[i-1] + 1);

            if(endOfRange){
                if(nums[i-1] == start){
                    ans.push_back(to_string(start));
                }
                else{
                    ans.push_back(to_string(start)+"->"+to_string(nums[i-1]));
                }
                if(i<n){
                    start = nums[i];
                }
            }
        }
        return ans;
    }
};