class Solution {
public:
    bool isAnagram(string s, string t) {
       int len = s.length();
       int len2 = t.length();
       if(len!=len2) return 0;

       sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i =0 ;i<len ;i++){
            if(s[i]!= t[i]) return 0;

            
        }
        return 1;
        
        
    }
};