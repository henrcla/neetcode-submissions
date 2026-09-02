class MinStack {
private:
    stack<int> numberStack;
    stack<int> minStack;
public:

    MinStack() {  
    }
    
    // LOGIC works because if you push a number that doesn't become the
    // current minimum, it cannot become the minimum as you can't get 
    // rid of elements 'lower' in the stack before getting rid of this larger
    // top element (i.e LIFO principle)

    void push(int val) {
        numberStack.push(val);
        if (minStack.empty() || val <= minStack.top()){
            minStack.push(val);
        } 
    }
    
    void pop() {
        if (numberStack.top() == minStack.top()){
            minStack.pop();
        }
    numberStack.pop();
    }
    
    int top() {
        return numberStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }

};
