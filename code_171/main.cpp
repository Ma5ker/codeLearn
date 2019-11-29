#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
class Solution {
public:
	int titleToNumber(string s) {
		int size = s.size();
		int ret = 0;
		for (int i = 0; i < size; i++) {
			ret += pow(26, size - 1 - i) * (s[i] - 'A' + 1);
		}
		return ret;
	}
};
int main() {
	string a = "AB";
	Solution sln;
	cout << sln.titleToNumber(a);
	return 0;
}