class Solution {
public:
    bool Fun(vector<int>& nums, int days , int cap){
        int ans = 1;
        int cnt  = 0;
        for(int i =0;i<nums.size();i++){
            if(cnt + nums[i] > cap){
                cnt =nums[i];
                ans++;
            }
            else {
                cnt +=nums[i];
            }

        }
        if(ans <= days) return 1;
        else return 0;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int n = nums.size();
        
        int sum =0;
        int maxi = 0;

        for(int x : nums){
            sum +=x;
            maxi = max(maxi , x) ;
        }

        int low = maxi ;
        int high = sum  ;
        
        int answer = 0;

        while(low <= high ){
            int mid = low + (high -low) / 2 ;
            if(Fun(nums , days , mid)){
                answer = mid ;
                high =  mid-1;

            }else  {
                low = mid+1;
            }
        }
        return answer;


    }
};