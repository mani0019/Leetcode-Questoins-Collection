class Solution {
public:

    

    vector<string> mp = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(int idx, string &digits, string temp,vector<string>&ans) {

        if (idx == digits.size()) {
            ans.push_back(temp);
            return;
        }

        string letters = mp[digits[idx] - '0'];

        for (char ch : letters) {
            solve(idx + 1, digits, temp + ch,ans);
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty())
            return {};
            vector<string> ans;

        solve(0, digits, "",ans);

        return ans;
    }
};