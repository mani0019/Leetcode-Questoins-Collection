class Solution {
public:
    int atmost(vector<int>&nums,int k){
        int count =0,maxC =0;
        int left =0;
        for(int i=0;i<nums.size();i++){
              if(nums[i]%2!=0) count++;

              while(count>k){
                if(nums[left]%2!=0){
                    count--;
                }
                left++;
              }
              maxC +=i-left+1;
        }
        return maxC;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k) - atmost(nums,k-1);
        
    }
};