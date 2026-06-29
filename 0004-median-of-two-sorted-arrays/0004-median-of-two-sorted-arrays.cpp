class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans = nums1;
        for (int x : nums2) {
            ans.push_back(x);
        }

        sort(ans.begin(), ans.end());

        int n = ans.size();
        int mid = n / 2;

        if (n % 2 == 0) {
            return (ans[mid] + ans[mid - 1]) / 2.0;
        } else {
            return ans[mid];
        }
    }
};