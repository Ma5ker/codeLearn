#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	string countAndSay(int n) {
		if (n == 1)
			return "1";
		else {
			string tmp = countAndSay(n - 1);
			string ret = "";
			int sz = tmp.size();
			int index = 0;
			int count = 0;

			while (index < sz) {
				if (index != sz - 1) {
					if (tmp[index] == tmp[index + 1]) {
						count++;
					}
					else {
						ret += to_string(count+1);
						ret += tmp[index];
						count = 0;
					}
				}
				else {
					ret += to_string(count+1);
					ret += tmp[index];
				}
				index++;
			}
			return ret;
		}
	}
};
int main() {
	int n = 30;
	Solution sln;
	string ret = sln.countAndSay(n);
	return 0;
}