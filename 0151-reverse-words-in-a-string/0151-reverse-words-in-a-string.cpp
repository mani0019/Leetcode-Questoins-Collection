class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.length();
        reverse(s.begin(), s.end());
        int i =0 , j = 0 ;
        while(j <n ){
            while(j<n && s[j]!=' ') j++;
            reverse(s.begin()+i , s.begin()+j);
            i= j+1;
            j++;

        }
        i =0;
        while(i < n){
            while(i <n && s[i]==' '){
                i++;

            }
            while(i <n && s[i]!=' '){
                ans.push_back(s[i]);
                i++;

            }
            while(i <n && s[i]==' '){
                i++;

            }
            if(i<n )  ans.push_back(' ');
            
 }

        return ans;
    }
};