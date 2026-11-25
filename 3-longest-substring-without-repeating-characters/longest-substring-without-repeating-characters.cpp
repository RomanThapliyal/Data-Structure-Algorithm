class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        else if(s.size() == 1) return 1;
        int c = 0;
        for(int i=0;i<s.size()-1;i++){
            int t = 1;
            for(int j=i+1;j<s.size();j++){
                bool breakBoth = false;
                for(int k=i;k<j;k++){
                    if(s[k] == s[j]){ 
                        breakBoth = true;
                        break;
                    }
                }
                if(breakBoth) break;
                t++;
            }
            c = max(c,t);
        }
        return c;
    }
};