class MyQueue {
public:
    stack<int>stack1;
    stack<int>stack2;
    MyQueue() {

    }
    
    void push(int x) {
        if(stack2.empty()){
            stack1.push(x);
        }
        else{
            while(!stack2.empty()){
                int top = stack2.top();
                stack2.pop();
                stack1.push(top);
            }
            stack1.push(x);
        }
    }
    
    int pop() {
        int top;
        if(stack2.empty()){  
            while(!stack1.empty()){
                top = stack1.top();
                stack1.pop();
                stack2.push(top);
            }
            top = stack2.top();
            stack2.pop();
            return top;
        }
        else{
            top = stack2.top();
            stack2.pop();
            return top;
        }
    }
    
    int peek() {
        if(stack1.empty()){
            return stack2.top();
        }
        else{
            while(!stack1.empty()){
                int top = stack1.top();
                stack1.pop();
                stack2.push(top);
            }
            return stack2.top();
        }
    }
    
    bool empty() {
        if( stack1.empty() && stack2.empty() ){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */