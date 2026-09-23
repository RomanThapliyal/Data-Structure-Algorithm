class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        bool firstUsed=false;
        for(int i=n-1;i>0;i--){
            if(value(s[i])>value(s[i-1])){
                ans+=value(s[i])-value(s[i-1]);
                i--;
                if(i==0) firstUsed=true;
            }
            else{ans+=value(s[i]);}
        }
        if(!firstUsed)ans+=value(s[0]);
        return ans;
    }
    int value(char c){
        if(c=='I')return 1;
        else if(c=='V')return 5;
        else if(c=='X')return 10;
        else if(c=='L')return 50;
        else if(c=='C')return 100;
        else if(c=='D')return 500;
        else if(c=='M')return 1000;
        return 0;
    }
};