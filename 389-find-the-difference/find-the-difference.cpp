class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>freq(26,0);
        char extraLetter;
        for(char ch:s){
            freq[ch-'a']++;
        }
        for(char ch:t){
            freq[ch-'a']--;
            if(freq[ch-'a']<0){
                extraLetter=ch;
            }
        }
        return extraLetter;
    }
};