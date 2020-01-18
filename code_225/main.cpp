#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
class MyStack {
public:
    //˫����ʵ��ջ
    //��Ȼ��ջʵ�ֶ�������һ������pop��ʵ���У��������ٻص���
    //����Ҫ�ǿ��ǵ�ȷ�����ݽṹ���ڴ��е�һ���ԣ�
    //���ѡ��ʹ��һ���̶����м�һ����ʱ���еķ�ʽ������ֱ�ӷ�����һ�����С�
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