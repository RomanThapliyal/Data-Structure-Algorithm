class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n=s.size();
        if(n==0){return n;}
        int maxLen=0;
        for(int i=0;i<n;i++){
            int c1=0,c0=0;
            bool seenOne=false;
            for(int j=i;j<n;j++){
                if(s[j]=='0'){
                    c0++;
                    if(seenOne){break;}
                }
                else{
                    seenOne=true;
                    c1++;
                }
                int len=j-i+1;
                if(len%2!=0){continue;}
                if(c0==c1){maxLen=max(maxLen,len);}
            }
        }
        return maxLen;
    }
};