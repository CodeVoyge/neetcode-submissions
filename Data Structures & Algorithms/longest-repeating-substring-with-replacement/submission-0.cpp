class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
    int start = 0, max_freq = 0, max_len = 0;
    
    for (int end = 0; end < s.size(); ++end) {
        count[s[end] - 'A']++;
        max_freq = *max_element(count.begin(), count.end());
        
        if ((end - start + 1) - max_freq > k) {
            count[s[start] - 'A']--;
            start++;
        }
        
        max_len = max(max_len, end - start + 1);
    }
    
    return max_len;
}

        
    };

