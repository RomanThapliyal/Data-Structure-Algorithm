class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=INT_MIN;
        vector<bool>ans;
        for(int x:candies){
            if(max<x) max=x;
        }
        for(int x:candies){
            if(x+extraCandies>=max) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};