class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        int maxcnt = 0;
        int ones = 0;
        int zeros = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1)
                ones++;
            if (nums[i] == 0)
                zeros++;

            while (zeros > k) {
                if (nums[j] == 0)
                    zeros--;
                j++;
            }

            maxcnt = max(maxcnt, i - j + 1);
        }
        return maxcnt;
    }
};