class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char x : s){
            if(x =='(' || x =='{' || x=='[') st.push(x);
            else{if(st.empty()) return false;
                int top = st.top();
                if(top =='(' && x==')') st.pop();
                else  if(top =='{' && x=='}') st.pop();
                else  if(top =='[' && x==']') st.pop();
                else return 0;
            }
        }
        
        if(st.empty()) return true;
        return false;
    }
};