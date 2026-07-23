class Solution {
public:
    int atmostC(vector<int>& nums, int goal){
        if(goal<0)return 0;
        int left =0;
        int MaxC =0;
        int count =0;
        for(int right =0;right<nums.size();right++){
           count+=nums[right];
           while(count>goal){
            count=count-nums[left];
            left++;
           }
           MaxC +=right-left+1;
        }
        return MaxC;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostC(nums,goal)-atmostC(nums,goal-1);
        
    }
};