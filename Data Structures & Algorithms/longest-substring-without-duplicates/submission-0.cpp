class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int n = s.length();
        int i = 0 , j = 0, maxlen = 0;

        while(j<n){
            if(seen.find(s[j]) == seen.end()){
                seen.insert(s[j]);
                maxlen = max(maxlen, j - i + 1);
                j++;
            }

            else{
                seen.erase(s[i]);
                i++;
            }
        }
        return maxlen; 
        }
        
};
