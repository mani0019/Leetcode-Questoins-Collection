class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        int cnt = 0;
        double avg =-DBL_MAX;
        int j = 0;

        for(int i =0;i<n;i++){
            sum+= nums[i];
            
            if(i-j+1 == k){
                avg=max(avg ,(sum / k));


            }
            while(i-j+1 >= k){
                sum-=nums[j];
                j++;
                }
        }
        return avg ;
        
    }
};