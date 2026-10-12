class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> anals;
        int a = 0;
        int b = 0;
        for(auto token:tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                if(anals.size() == 1){
                    return anals.top();
                }
                a = anals.top();
                b = anals.top();
                anals.pop();anals.pop();
                if(token == "+"){
                    anals.push(a+b);
                }
                if(token == "-"){
                    anals.push(a-b);
                }
                if(token == "*"){
                    anals.push(a*b);
                }
                if(token == "/"){
                    anals.push(a/b);
                }
            }
            else{
                anals.push(stoi(token));
            }
        }
        return anals.top();
    }
};
