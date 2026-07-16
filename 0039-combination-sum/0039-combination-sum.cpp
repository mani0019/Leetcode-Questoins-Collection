class Solution {
public:
    void help(int idx ,vector<int>nums, vector<vector<int>>&ans ,vector<int>ds , int tar){
        if(tar==0){
            ans.push_back(ds);
            return;
        }
        if(idx>nums.size()-1) return;
        
        if(nums[idx]<=tar){
          ds.push_back(nums[idx]);
          help(idx ,nums, ans,ds,tar - nums[idx]);
          ds.pop_back();


        }
        help(idx+1,nums ,ans,ds,tar);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int > ds;
        sort(nums.begin(),nums.end());
        help(0 ,nums, ans,ds,target);
        return ans;
        
    }
};