#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	vector<string> commonChars(vector<string>& A) {
		vector<string> ret;
		for (char i = 'z'; i >= 'a'; i--) {
			int count = 101;
			for (auto j : A) {
				int tmp = 0;
				for (auto t : j) {
					if (t == i) {
						tmp++;
					}
				}
				if (tmp < count) {
					count = tmp;
				}
			}
			for (int k = 0; k < count; k++) {
				string s = "a";
				s[0] = i;
				ret.push_back(s);
			}
		}
		return ret;
	}
};
int main() {
	vector<string> A = { "bella", "label", "roller" };
	Solution sln;
	vector<string> ret = sln.commonChars(A);

	return 0;
}