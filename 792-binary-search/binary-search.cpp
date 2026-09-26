class Solution {
public:
    int binarySearch(vector<int>& nums, int target,int l, int r){
        if(l>r) return -1;
        int mid=(l+r)/2;
        if(nums[mid]==target){return mid;}
        else if(nums[mid]>target){r=mid-1;}
        else{l=mid+1;}
        return binarySearch(nums,target,l,r);
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,target,0,nums.size()-1);
    }
};