class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()>=2&&islower(word[0])&&isupper(word[1])) return false;
        for(int i=1;i<word.size();i++){
            if(islower(word[1])!=islower(word[i])) return false;
        }
        return true;
    }
};