class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i= 0;
        int j =0 ;
        int maxrange = 0;
        int zeros = 0;
        while(j<nums.size()){
             if(nums[j]==0) zeros++;
            if(zeros>k){
                while(nums[i]!=0) {
                    i++;
                }
                i++;
                zeros--;
            }
            if(zeros <=k)
            {
                maxrange=max(maxrange , j-i+1);

            }
            j++;


        }
        return maxrange;
        
    }
};