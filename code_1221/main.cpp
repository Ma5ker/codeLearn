#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	int balancedStringSplit(string s) {
		int flag = 0;//R++ L--;
		int count = 0;
		for (auto be = s.begin(); be != s.end(); be++) {
			if (*be == 'R') {
				flag++;
			}
			else {
				flag--;
			}
			if (flag == 0) {
				count++;
			}
		}
		return count;
	}
};

int main() {
	string s = "RLRRLLRLRL";
	Solution sln;
	cout << sln.balancedStringSplit(s) << endl;
}