#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	vector<int> diStringMatch(string S) {
		vector<int> ret = {};
		//vector<int> tmp = {};
		//for (auto i = 0; i <= S.size(); i++) {
		//	tmp.push_back(i);
		//}
		//for (auto be = S.begin(); be != S.end(); be++) {
		//	if ((*be) == 'I') {
		//		ret.push_back(*tmp.begin());
		//		tmp.erase(tmp.begin());
		//	}
		//	else {
		//		ret.push_back(*(tmp.end() - 1));
		//		tmp.pop_back();
		//	}
		//}
		//ret.push_back(tmp[0]);
		//return ret;
		int i = 0, j = S.size();
		for (auto be = S.begin(); be != S.end(); be++) {
			if ((*be) == 'I') {
				ret.push_back(i);
				i++;
			}
			else {
				ret.push_back(j);
				j--;
			}
		}
		ret.push_back(i);
		return ret;
	}
};
int main() {
	string s = "IDID";
	Solution sln;
	vector<int> ret = sln.diStringMatch(s);
	return 0;
}