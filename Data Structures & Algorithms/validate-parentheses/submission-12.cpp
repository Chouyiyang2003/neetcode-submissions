class Solution {
public:
    bool isValid(string s) {
        if(s[0] != '(' || s[0] != '[' || s[0] != '{'){
            return false;
        }
        stack<char> st;
        for(char c:s){
            if(c == '}' || c == ']' || c == ')'){
                if(c == '}' && st.top() != '{'){
                    return false;
                }
                else if(c == ')' && st.top() != '('){
                    return false;
                }
                else if(c == ']' && st.top() != '['){
                    return false;
                }
                st.pop();
            }  
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
