class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int sumL =0;
        int sumR = 0;
        int maxSum = 0;
        for(int i=0;i<n;i++){
            sumL+=nums[i];
        }
        if(k%n ==0) return sumL;
        for(int i = n-1 ; i>=k;i--){
              sumL-=nums[i];
        }

        int idx = n-1;
        maxSum = sumL;
        for(int i=k-1;i>=0;i-- ){
            sumL -=nums[i];
            sumR+=nums[idx];
            idx--;
            maxSum = max(maxSum,sumL+sumR);

        }
        return maxSum;
        
    }
};