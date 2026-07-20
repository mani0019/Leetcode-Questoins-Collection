class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> st;
        string ans = "";
        for (char ch : num) {
            while (!st.empty() && (k > 0 && st.top() > (ch - '0'))) {
                st.pop();

                k--;
            }
            st.push(ch - '0');
        }
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        while (!st.empty()) {
            char x = st.top() + '0';
            st.pop();
            ans.push_back(x);
        }

        reverse(ans.begin(), ans.end());

        int i = 0;
        while (i < ans.size() && ans[i] == '0')
            i++;

        ans = ans.substr(i);

        if (ans.empty())
            return "0";

        return ans;
    }
};