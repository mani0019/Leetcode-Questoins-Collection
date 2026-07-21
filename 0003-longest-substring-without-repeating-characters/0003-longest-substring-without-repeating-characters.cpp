class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int n = s.length();
        string ans = "";

        int idx = -1;
        int left = 0;
        int maxlen = 0;
        for (int i = 0; i < n; i++) {
            map[s[i]]++;

            while (map[s[i]] > 1) {

                map[s[left]]--;
                left++;
            }
            maxlen = max(maxlen, i-left + 1);
        }
        return maxlen;
    }
};