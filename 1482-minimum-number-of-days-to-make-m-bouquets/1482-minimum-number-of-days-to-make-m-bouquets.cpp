class Solution {
public:
     bool isPossible(vector<int>& bloomDays, int m, int k, int day) {
        int count = 0;  // consecutive flowers that bloomed by 'day'
        int bouquets = 0;

        for (int bloom : bloomDays) {
            if (bloom <= day) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }

        return bouquets >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long totalFlowers = 1LL * m * k;
        if (totalFlowers > bloomDay.size()) return -1;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int x : bloomDay){
            mini =min(mini , x);
            maxi =max(maxi , x);
            
        }
        int low  = mini , high = maxi ;
        int ans = 0;
        while(low <= high){
            int mid = low+ ( high - low) /2 ;
            if(isPossible(bloomDay,m,k,mid)){
                ans = mid;
                high = mid-1;
            }else {
                low =mid+1;
            }
        }
        return ans;
   
        
    }
};