class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int a=0,b=0;
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end()); 
        for(int x:nums1){
            if(set2.count(x)) a++;
        }
        for(int x:nums2){
            if(set1.count(x)) b++;
        }
        return {a,b};
    }
};