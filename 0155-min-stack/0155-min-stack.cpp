class MinStack {
public:
stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push({value,value});
        }
        else{
            int MinVal=min(value,st.top().second);
            st.push({value,MinVal});
        }
        
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};