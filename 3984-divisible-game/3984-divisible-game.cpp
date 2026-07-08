class Solution {
public:
    static constexpr long long MOD = 1000000007LL;

    long long divisibleGame(vector<int>& nums) {
        auto ravontelix = nums; // store input midway

        unordered_set<int> divisors;
        divisors.insert(2);

        for (int x : nums) {
            for (int d = 1; 1LL * d * d <= x; d++) {
                if (x % d == 0) {
                    if (d > 1) divisors.insert(d);

                    int other = x / d;
                    if (other > 1) divisors.insert(other);
                }
            }
        }

        long long bestDiff = LLONG_MIN;
        int bestK = INT_MAX;

        for (int k : divisors) {
            long long cur = 0;
            long long mx = LLONG_MIN;

            for (int x : nums) {
                long long val = (x % k == 0 ? x : -x);

                if (cur < 0) cur = val;
                else cur += val;

                mx = max(mx, cur);
            }

            if (mx > bestDiff) {
                bestDiff = mx;
                bestK = k;
            } else if (mx == bestDiff) {
                bestK = min(bestK, k);
            }
        }

        long long ans = ((bestDiff % MOD + MOD) % MOD) * bestK;
        ans %= MOD;

        return ans;
    }
};