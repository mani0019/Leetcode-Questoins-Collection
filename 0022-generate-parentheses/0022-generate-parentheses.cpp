class Solution {
public:
   void generateString(int  O ,int C ,vector<string>&ans ,string curr ,int n ){
        if(O == n && C== n) {
            ans.push_back(curr);
            return ;
        }
        if(O < n){
            generateString(O+1,C,ans,curr+"(",n);
        }
        if(C<O){
            generateString(O,C+1,ans,curr+")",n);
        }
    };
    vector<string> generateParenthesis(int n) {
        vector<string>ans ;
        generateString(0 , 0 ,ans ,"", n);
        return ans;
        
    }
};