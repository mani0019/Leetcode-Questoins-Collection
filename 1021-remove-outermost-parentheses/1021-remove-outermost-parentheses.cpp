class Solution {
public:
    string removeOuterParentheses(string s) {
        string  st ="";
        int bal =0;
        for(char ch : s){
            if(ch == '('){
                if(bal > 0){
                    st.push_back('(');
                }
                bal++;
            }else {
                bal--;
                
                if(bal > 0){
                    st.push_back(')');
                }

            }

        }
        
          
        return st;
    }
};