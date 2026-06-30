class Solution {
public:
    bool isPossible(vector<int>& nums, int k , int x){
        int ans = 0 ;
        int cnt =0;
        for(int i : nums){
            cnt+=ceil((double) i / x) ;

        }
        if(cnt <=k) return 1;
        else return 0;

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n  = nums.size();
        int low =1;
        int high = *max_element(nums.begin(), nums.end());;
        int ans =0;

         while(low <= high){
            int mid = low+ ( high - low) /2 ;
            if(isPossible(nums,threshold,mid)){
                ans = mid;
                high = mid-1;
            }else {
                low =mid+1;
            }
        }
        return ans;
        
    }
};