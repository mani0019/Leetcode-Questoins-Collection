class MyStack {
public:
        queue<int>Q;

    MyStack() {

        
    }
    
    void push(int x) {
        Q.push(x);
        int sz = Q.size();
        for(int i =1;i<sz;i++){
            Q.push(Q.front());
            Q.pop();
        }
        
    }
    
    int pop() {
        int x = Q.front();
        Q.pop();
       return x;
        
    }
    
    int top() {
        return Q.front();
        
    }
    
    bool empty() {
         return Q.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */