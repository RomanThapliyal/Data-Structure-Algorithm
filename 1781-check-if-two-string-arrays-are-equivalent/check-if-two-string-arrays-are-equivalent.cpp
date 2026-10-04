class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="";
        string w2="";
        for(string x:word1){
            w1+=x;
        }
        for(string x:word2){
            w2+=x;
        }
        if(w1==w2){
            return true;
        }
        return false;
    }
};