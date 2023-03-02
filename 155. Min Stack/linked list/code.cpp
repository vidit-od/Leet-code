struct Node{
    int val{};
    int min{};
    Node*next = nullptr;
};

class MinStack {
public:
    MinStack(): topNode(nullptr) {
    }
    
    void push(int val) {
        Node* newnode = new Node();
        newnode->val = val;
        newnode->min = val;

        if(topNode == nullptr){
            topNode = newnode;
            return;
        }

        newnode->next = topNode;
        newnode->min = std::min(newnode->min,topNode->min);
        topNode = newnode;
    }
    
    void pop() {
        topNode= topNode->next;
    }
    
    int top() {
        return topNode->val;
    }
    
    int getMin() {
        return topNode->min;
    }
private:
    Node* topNode;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */