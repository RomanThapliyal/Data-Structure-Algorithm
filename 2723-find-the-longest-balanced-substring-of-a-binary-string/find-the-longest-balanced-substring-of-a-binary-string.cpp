class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n=s.size();
        int maxLen=0;
        int i=0;
        while(i<n){
            int c0=0,c1=0;
            while(i<n&&s[i]=='0'){
                c0++;
                i++;
            }
            while(i<n&&s[i]=='1'){
                c1++;
                i++;
            }
            int balancedLen=2*min(c0,c1);
            maxLen=max(maxLen,balancedLen);
        }
        return maxLen;
    }
};