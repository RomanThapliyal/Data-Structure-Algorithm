class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,bool> seen;
        for(int i=0;i<sentence.size();i++){
            seen[sentence[i]]=true;
        }
         return seen.size()==26;
    }
};