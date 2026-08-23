class Solution {
public:
    int characterReplacement(string s, int k) {
        

         int left =0;
        int mxcnt = 0;
        int freq[26] = {0};
        int mxF = 0;
        for(int i =0;i<s.length();i++){
            freq[s[i] - 'A']++;
            mxF = max(mxF , freq[s[i] - 'A'] );
            int window = i-left+1;

            int valid  = window - mxF;
            
            if(valid <= k){
                mxcnt =max(mxcnt , i-left+1);
            }
            if(valid >k){
                while(valid > k){
                     freq[s[left]-'A']--;
                    left++;

                    valid  = i-left+1 - mxF;

                }
            }



            



      }
      return mxcnt;

        
    }
};