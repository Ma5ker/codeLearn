#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
	int calPoints(vector<string>& ops) {
		if (ops.size() == 0)
			return 0;
		int ans = 0;
		stack<int> score;
		for (auto s : ops) {
			if (s == "+") {
				int tmp = 0;
				int top = score.top();
				score.pop();
				tmp = top + score.top();
				score.push(top);
				score.push(tmp);
			}
			else if (s == "C") {
				score.pop();
			}
			else if (s == "D") {
				score.push(score.top() * 2);
			}
			else {
				score.push(atoi(s.c_str()));
			}
		}
		while (!score.empty()) {
			ans += score.top();
			score.pop();
		}
		return ans;
	}
};
int main() {
	return 0;
}