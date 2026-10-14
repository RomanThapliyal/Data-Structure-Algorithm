class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                temp+=tolower(static_cast <unsigned char>(s[i]));
            }
        }
        for(int i=0;i<(temp.size()/2);i++){
            int j=temp.size()-1-i;
            if(temp[i]!=temp[j]){
                return false;
            }
        }
        return true;
    }
};