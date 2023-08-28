class MyStack {
public:
    queue<int> myQue;
    MyStack() {
        
    }
    
    void push(int x) {
        int sz = myQue.size();
        myQue.push(x);
        while(sz--){
            myQue.push(myQue.front());
            myQue.pop();
        }
    }
    
    int pop() {
        int res = top();
        myQue.pop();
        return res;
    }
    
    int top() {
        return myQue.front();
    }
    
    bool empty() {
        return myQue.empty();
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