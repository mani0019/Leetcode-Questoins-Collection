class Solution {
public:

    bool funcX(const vector<int>& piles,int mid, int h)
    {
        long long time =0;
            for (int p : piles)
            {
                time +=(p+mid-1)/mid;
                // Adding mid -1 so that this will automatically gives celing instead of floor in CPP.
            }
        return time<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = *max_element(piles.begin(),piles.end());
        int ans =hi;

        std::cout<<hi<<std::endl;

        while (lo<=hi)
        {
            int mid = lo+(hi-lo)/2;
            if(funcX(piles,mid,h))
            {
                ans = mid;
                hi = mid-1;
            }
            else
            {
                lo = mid+1;
            }
        }

        return ans;
    }
};