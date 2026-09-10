class MinStack {
   public:
    stack<int> stk;
    stack<int> minstack;

    MinStack() {}

    void push(int val) {
        if (stk.empty()) {
            minstack.push(val);
        } else {
            int mini = min(val, minstack.top());
            minstack.push(mini);
        }
        stk.push(val);
    }

    void pop() {
        stk.pop();
        minstack.pop();
    }

    int top() { return stk.top(); }

    int getMin() { return minstack.top(); }
};