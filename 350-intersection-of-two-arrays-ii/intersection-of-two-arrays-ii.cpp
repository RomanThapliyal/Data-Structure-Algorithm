class Solution {
public:
     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return intersect(nums2, nums1);
        unordered_map<int, int> cnt;
        for (int x : nums1) cnt[x]++;
        vector<int> res;
        for (int x : nums2) {
            if (cnt[x] > 0) {
                res.push_back(x);
                cnt[x]--;
            }
        }
        return res;
    }
};