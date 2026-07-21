class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        int n =nums.size();
        k=k%n;

        for(int i=nums.size()-k;i<nums.size();i++){
            ans.push_back(nums[i]);

        }
    //    reverse(ans.begin(),ans.end());
       for(int i =0;i<nums.size()-k;i++){
        ans.push_back(nums[i]);
       }
       
        nums=ans;
        
    }
};