#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
	string reverseWords(string s) {
		if (s.size() == 0) {
			return s;
		}
		auto be = s.begin();
		auto tmp = s.begin();
		for (; tmp != s.end(); tmp++) {
			if (*tmp == ' ') {
				reverse(be, tmp);
				be = tmp + 1;
			}
		}
		reverse(be, tmp);
		return s;
	}
};
int main() {
	string s = "Let's take LeetCode contest";
	Solution sln;
	cout << sln.reverseWords(s) << endl;
	return 0;
}