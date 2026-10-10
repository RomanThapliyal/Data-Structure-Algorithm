class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d;
        for(int i=0;i<arr.size()-2;i++){
            d=arr[i]-arr[i+1];
            if(d!=arr[i+1]-arr[i+2]) return false;
        }
        return true;
    }
};