#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
class MyQueue {
public:
    //双栈可实现队列
    stack<int> queue;
    /** Initialize your data structure here. */
    MyQueue() {
        queue = {};
    }

    /** Push element x to the back of queue. */
    void push(int x) {
        queue.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (queue.size() == 0) {
            return -1;
        }
        stack<int> tmp;
        while (!queue.empty()) {
            tmp.push(queue.top());
            queue.pop();
        }
        int ret = tmp.top();
        tmp.pop();
        while (!tmp.empty()) {
            queue.push(tmp.top());
            tmp.pop();
        }
        return ret;
    }

    /** Get the front element. */
    int peek() {
        if (queue.size() == 0) {
            return -1;
        }
        stack<int> tmp;
        while (!queue.empty()) {
            tmp.push(queue.top());
            queue.pop();
        }
        int ret = tmp.top();
        while (!tmp.empty()) {
            queue.push(tmp.top());
            tmp.pop();
        }
        return ret;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return queue.empty();
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
int main() {
	return 0;
}