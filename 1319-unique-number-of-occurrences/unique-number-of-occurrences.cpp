class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        unordered_set<int>seen;
        for(int x:arr){
            freq[x]++;
        }
        for(auto& [value,count]:freq){
            if(seen.count(count)){return false;}
            seen.insert(count);
        }
        return true;
    }
};