#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0)
			return "";
		if (strs.size() == 1)
			return strs[0];
		string ret = strs[0];
		int count = 0;
		for (int i = 0; i < ret.length(); i++) {
			bool flag = true;
			for (int j = 1; j < strs.size(); j++) {
				if (ret[i] != strs[j][i]) {
					flag = false;
					break;
				}
			}if (flag == true) {
				count++;
			}
			else {
				break;
			}
		}
		return ret.substr(0, count);
	}
};
int main() {
	vector<string> tmp = {"flower", "flow", "flight"};
	Solution sln;
	string ret = sln.longestCommonPrefix(tmp);
	return 0;
}