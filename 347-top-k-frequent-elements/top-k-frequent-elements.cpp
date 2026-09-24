class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        unordered_set<int>set;
        for(int x:nums){
            freq[x]++;
        }
        vector<pair<int,int>>v(freq.begin(),freq.end());
        sort(v.begin(),v.end(),[](const auto& a,const auto& b){
            return a.second > b.second;
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};