class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        
        int i = 0, n = s.size();
        string result;

        while (i < n) {
            while (i < n && s[i] == ' ') i++; // skip spaces
            if (i >= n) break;

            int j = i;
            while (j < n && s[j] != ' ') j++;

            reverse(s.begin() + i, s.begin() + j);

            if (!result.empty()) result += " ";
            result += s.substr(i, j - i);

            i = j;
        }

        return result;
    }
};