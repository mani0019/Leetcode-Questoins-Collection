class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> mp;

        int n = s.length();
        int count = 0;
        int left = 0;

        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;

            while (left < n && mp.size() >= 3) {
                mp[s[left]]--;
                if (mp[s[left]] == 0)
                    mp.erase(s[left]);
                left++;
            }
            count += left;
        }
        return count;
    }
};