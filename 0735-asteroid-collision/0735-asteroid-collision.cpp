class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> st;
        vector<int> ans;

        for (int num : nums) {

            while (!st.empty() && st.top() > 0 && num < 0) {

                int x = -num;

                if (st.top() < x) {
                    st.pop();
                }
                else if (st.top() == x) {
                    st.pop();
                    num = 0;          // Current asteroid also destroyed
                    break;
                }
                else {
                    num = 0;          // Current asteroid destroyed
                    break;
                }
            }

            if (num != 0)
                st.push(num);
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};