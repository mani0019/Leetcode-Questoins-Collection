class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int cnt =k;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= k) {
                k++;  // If current number is less than or equal to k, increment k
            } else {
                break; // Stop when we reach a number greater than k
            }
        }
        return k;
    }
};