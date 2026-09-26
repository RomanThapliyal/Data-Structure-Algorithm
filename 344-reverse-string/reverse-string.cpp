class Solution {
public:
    void reverseString(vector<char>& s,int l,int r) {
        if(l>(r-1)){return;}
        swap(s[l],s[r-1]);
        reverseString(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        reverseString(s,0,s.size());
    }
};