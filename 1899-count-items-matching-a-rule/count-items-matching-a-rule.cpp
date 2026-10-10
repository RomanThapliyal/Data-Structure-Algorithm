class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=0;
        int i=0;
        while(i<items.size()){
            if(ruleKey=="type"){
                if(items[i][0]==ruleValue) n++;
            }
            else if(ruleKey=="color"){
                if(items[i][1]==ruleValue) n++;
            }
            else if(ruleKey=="name"){
                if(items[i][2]==ruleValue) n++;
            }
            i++;
        }
        return n;
    }
};