class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int mxlen = 0;
        int j =0;
        for(int i =0 ;i< s.length();i++){
            mp[s[i]]++;
            
            while(mp[s[i]] >1){
                mp[s[j]]--;
                if(mp[s[j]]==0) mp.erase(s[j]);
                j++;

            }
            mxlen = max(mxlen , i-j+1);
            
        }
        return mxlen;


        
        
    }
};