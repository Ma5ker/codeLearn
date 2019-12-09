#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
class Solution {
public:
	string pai(string S) {
		string tmp_1;
		string tmp_2;
		string ret;
		for (int i = 0; i < S.size(); i += 2) {
			tmp_1 += S[i];
			if (i + 1 < S.size())
				tmp_2 += S[i + 1];
		}
		sort(tmp_1.begin(),tmp_1.end());
		sort(tmp_2.begin(), tmp_2.end());
		for (int i = 0; i < tmp_1.size(); i ++) {
			ret += tmp_1[i];
		}
		for (int i = 0; i < tmp_2.size(); i++) {
			ret += tmp_2[i];
		}
		return ret;
	}
	int numSpecialEquivGroups(vector<string>& A) {
		set<string> ret;
		for (auto s : A) {
			ret.insert(pai(s));
		}
		return ret.size();
	}
};
int main() {
	vector<string> A = { "abc", "acb", "bac", "bca", "cab", "cba" };
	Solution sln;
	cout << sln.numSpecialEquivGroups(A);
	return 0;
}