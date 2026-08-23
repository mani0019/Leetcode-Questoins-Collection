class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int total_sum = 0;
        int n = nums.size();
        for (int num : nums) {
            total_sum += num;
        }
        if (k == n)
            return total_sum;
        int sum = 0;

        int i = 0, j = n - 1;
        while (i < k) {
            sum += nums[i];
            i++;
        }
        i = k - 1;
        int maxsum = sum;

        while (j >= n - k) {
            sum -= nums[i];
            sum += nums[j];
            i--;
            j--;
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};