#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
class MyStack {
public:
    //双队列实现栈
    //当然和栈实现队列那题一样，在pop的实现中，本不必再回捣，
    //但主要是考虑到确保数据结构在内存中的一致性，
    //因此选择使用一个固定队列加一个临时队列的方式，而非直接返回另一个队列。
    queue<int> stack;
    /** Initialize your data structure here. */
    MyStack() {
        stack = {};
    }

    /** Push element x onto stack. */
    void push(int x) {
        stack.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if (stack.size() == 0) {
            return -1;
        }
        queue<int> tmpq;
        while (stack.size()>1) {
            tmpq.push(stack.front());
            stack.pop();
        }
        int ret = stack.front();
        stack.pop();
        while (!tmpq.empty()) {
            stack.push(tmpq.front());
            tmpq.pop();
        }
        return ret;
    }

    /** Get the top element. */
    int top() {
        return stack.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return stack.empty();
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
int main() {
	return 0;
}