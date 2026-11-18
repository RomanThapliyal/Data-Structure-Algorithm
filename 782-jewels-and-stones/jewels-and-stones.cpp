class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> hash;
        int ans = 0;
        for(char ch : jewels){
            hash.insert(ch);
        }

        for(char ch : stones){
            if(hash.count(ch)){
                ans++;
            }
        }

        return ans;
    }
};