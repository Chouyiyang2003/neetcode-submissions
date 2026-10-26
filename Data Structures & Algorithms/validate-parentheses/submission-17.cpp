class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c:s){
            if(c == ')' && !st.empty()){
                if(st.top() != '('){
                    return false;
                }
                else{
                    st.pop();
                }
            }    
            else if(c == ']' && !st.empty()){
                if(st.top() != '['){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else if(c == '}' && !st.empty()){
                if(st.top() != '{'){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            else{st.push(c);}
        }
        return st.empty();
    }
};
