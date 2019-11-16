#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class RecentCounter {
public:
	queue<int> q;
	RecentCounter() {}
	int ping(int t) {
		q.push(t);
		while (q.front()<t-3000) {
			q.pop();
		}
		return q.size();
	}
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
int main() {
	///这题目啥玩意儿啊 ，阅读理解
	return 0;
}