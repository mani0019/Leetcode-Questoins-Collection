class Solution {
public:
int atmost(vector<int>& nums, int k){
    int n = nums.size();
        int cnt = 0;
        unordered_map<int,int>mp;
        int left = 0 ;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0) mp.erase(nums[left]);

                left++;

            }
            cnt+=i-left+1;

        }
        return cnt;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) { 
        return atmost(nums,k) - atmost(nums,k-1);
    }
};