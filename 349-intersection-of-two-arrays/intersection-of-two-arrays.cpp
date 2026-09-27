class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int> seen(nums1.begin(), nums1.end());
        for(int x:nums2){
            if(seen.count(x)){
                ans.push_back(x);
                seen.erase(x);
            }
        }
        return ans;
    }
};