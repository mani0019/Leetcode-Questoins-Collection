class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int start = nums[0][0];
        int end = nums[0][1];


        vector<vector<int>>ans;
        for(int i =1;i<nums.size();i++){
            int first = nums[i][0];
            int last = nums[i][1];

            if(end >= first){
                end = max(last , end);
                
            }else{
                ans.push_back({start , end });
                start = first ;
                end = last ;
            }
        }
        ans.push_back({start , end });
        return ans;
        
    }
};