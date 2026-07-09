class Solution {
public:
    bool isPossible(vector<int>& quantities, int n, int mid) {
        long long stores = 0;

        for(int q : quantities) {
            stores += (q + mid - 1) / mid;
        }

        return stores <= n;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1;
        int high = *max_element(quantities.begin(), quantities.end());

        while(low < high) {
            int mid = low + (high - low) / 2;

            if(isPossible(quantities, n, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};