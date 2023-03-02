class MinStack {
public:
    int min;
    stack<pair<int,int>>stack;
    MinStack() {
    }
    
    void push(int val) {
        if(stack.empty()){
            min = val;
            stack.push({val,val});
        }
        else{
            if(val < min){
                min = val;
                stack.push({val,min});
            }
            else{
                stack.push({val,min});
            }
        }
    }
    
    void pop() {
        if( stack.top().second == min ){
            stack.pop();
            if(!(stack.empty())){
                min = stack.top().second;
            }
        }
        else{
            stack.pop();
        }
    }
    
    int top() {
        return stack.top().first;
    }
    
    int getMin() {
        return stack.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */