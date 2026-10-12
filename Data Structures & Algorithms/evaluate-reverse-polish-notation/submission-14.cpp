class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> anals;
        int a = 0;
        int b = 0;
        int c = 0;
        for(auto token:tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                a = anals.top();
                anals.pop();
                b = anals.top();
                anals.pop();
                if(token == "+"){
                    c = a + b;
                    anals.push(c);
                }
                if(token == "-"){
                    c = b - a;
                    anals.push(c);
                }
                if(token == "*"){
                    c = a * b;
                    anals.push(c);
                }
                if(token == "/"){
                    c = b / a;
                    anals.push(c);
                }
            }
            else{
                anals.push(stoi(token));
            }
        }
        return anals.top();
    }
};
