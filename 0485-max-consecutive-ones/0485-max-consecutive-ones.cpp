class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int mxcnt =0 ;
        int cnt = 0;
        for(int i =0;i<n;i++){
            if(nums[i]==1) cnt++;
            else{
                mxcnt = max(mxcnt,cnt);
                cnt =0 ;
            }
            mxcnt = max(mxcnt,cnt);
        }
        return mxcnt;
        
    }
};