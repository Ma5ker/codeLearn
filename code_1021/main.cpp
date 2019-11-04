#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	string removeOuterParentheses(string S) {
		string ret;
		int flag = 0;
		for (auto be = S.begin(); be != S.end(); be++) {
			if (*be == '(') {
				if (!flag == 0){
					ret.push_back(*be);
				}
				flag++;
			}
			if (*be == ')') {
				flag--;
				if (!flag == 0) {
					ret.push_back(*be);
				}
			}
		}
		return ret;
	}
};

int main() {
	string s = "(()())(())";
	string s_1 = "(()())(())(()(()))";
	Solution sln;
	cout << sln.removeOuterParentheses(s_1) << endl;
	return 0;
}