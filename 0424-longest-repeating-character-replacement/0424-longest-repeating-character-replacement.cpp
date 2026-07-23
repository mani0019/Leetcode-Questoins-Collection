class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int maxF = 0;
        int maxLen = 0;
        unordered_map<int,int>mp;
       int j = 0;
        for(int i =0;i<n;i++){
             mp[s[i]]++;
             maxF = max(maxF , mp[s[i]]);

             if(i - j +1 - maxF > k){
                mp[s[j]]--;
                j++;
             }
             maxLen = max(maxLen , i - j+1);
        }
        return maxLen;
    }
};