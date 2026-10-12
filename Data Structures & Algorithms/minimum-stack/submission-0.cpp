class MinStack {
public:

    stack<int> st;
    stack<int> minst;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);

        if(minst.empty()){
            minst.push(val);
        }
        else{
            minst.push(min(val, minst.top()));
        }
    }
    
    void pop() {
        minst.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
