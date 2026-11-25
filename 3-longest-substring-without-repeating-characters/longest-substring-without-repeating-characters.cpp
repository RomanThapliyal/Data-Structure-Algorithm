class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0 || s.size() == 1) return s.size();
        int start = 0;
        int end = 1;
        int count = 0;
        while(end < s.size()){
            bool notDuplicate = true;
            for(int i=start;i<end;i++){
                if(s[end] == s[i]){
                    notDuplicate = false;
                    break;
                }
            }
            if(notDuplicate){
                end++;
            }
            else{
                start++;
            }
            count = max(count, (end - start));
        }
        return count;
    }
};