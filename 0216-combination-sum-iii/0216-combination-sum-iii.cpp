class Solution {
public:
    void help(int i , int k ,int n , int sumTillNow ,vector<vector<int>>&ans , vector<int>&subset){
        if(k<0) return;
        if(sumTillNow > n) return;
        if(k ==0){
            if(sumTillNow ==n){
                ans.push_back(subset);
                return;
            }
        }
        if(i>9) return;
        
        sumTillNow+=i;
        subset.push_back(i);
        help(i+1,k-1,n,sumTillNow,ans,subset);
        sumTillNow-=i;
        subset.pop_back();
        help(i+1 ,k,n,sumTillNow , ans , subset);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>subset;
        help(1 ,k ,n ,0,ans,subset);
        return ans;
        
    }
};