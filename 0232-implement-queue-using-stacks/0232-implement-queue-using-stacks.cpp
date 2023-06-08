class MyQueue {
public:
    stack<int>stk1;
    stack<int>stk2;
    
    void push(int x) {
       stk1.push(x); 
    }
    
    int pop(){
        peek();
        int data=stk2.top();
        stk2.pop();
        return data;
    }
    
    int peek(){
        if(stk2.empty()){
            while(!stk1.empty()){
                stk2.push(stk1.top());
                stk1.pop();
            }
        }
        return stk2.top();
    }
    
    bool empty(){
        return stk1.empty() && stk2.empty();
    }
};