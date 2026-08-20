class MinStack {
    vector<int> MiniStack;
    vector<int> st;

public:
    MinStack() {
    }
    
    void push(int val) {
        MiniStack.push_back(val);

        if(st.empty())
            st.push_back(val);
        else
            st.push_back(min(val, st.back()));
    }
    
    void pop() {
        MiniStack.pop_back();
        st.pop_back();
    }
    
    int top() {
        return MiniStack.back();
    }
    
    int getMin() {
        return st.back();
    }
};
