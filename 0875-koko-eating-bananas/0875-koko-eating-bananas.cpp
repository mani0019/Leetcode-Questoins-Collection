class Solution {
public:
    long long requiredTime(vector<int> nums , int m){
        long long temp = 0;
        for(int i =0;i<nums.size();i++){
            temp += (nums[i] + m - 1) / m;
        }
        return temp;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int n = nums.size();
        int maxNum = 0;
        for(int x : nums){
            maxNum = max(x,  maxNum);
        }

        int low =1;
        int high = maxNum;
        int ans =INT_MAX;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(requiredTime(nums , mid)<=h) {
                ans = mid;
                high =mid-1;
            }
            
            else low =mid+1;
        }
        return ans ;
    }
};