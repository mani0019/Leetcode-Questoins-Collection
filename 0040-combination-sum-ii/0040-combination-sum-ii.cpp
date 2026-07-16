class Solution {
public:
    void help(int idx, vector<int> nums, vector<vector<int>>& ans,
              vector<int>& ds, int tar) {
        if (tar == 0) {
            if (tar == 0) {
                ans.push_back(ds);
            }
            return;
        }
        if (idx > nums.size() - 1)
            return;
        for (int i = idx; i < nums.size(); i++) {
            if (i > idx && nums[i] == nums[i - 1])
                continue;
            if (nums[i] > tar)
                break;
            ds.push_back(nums[i]);

            // Recur with the updated target and next index (i + 1 to avoid
            // repetition)
            help(i + 1, nums, ans, ds, tar - nums[i]);

            // Backtrack by removing the last added element
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        vector<int> subset;
        help(0, nums, ans, subset, target);
        return ans;
    }
};