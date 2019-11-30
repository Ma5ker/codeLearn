#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	int count_a(string S,char a) {
		int ret = 0;
		for(auto i : S) {
			if (i == a) {
				ret++;
			}
		}
		return ret;
	}
	vector<string> commonChars(vector<string>& A) {
		vector<string> ret;
		string junk = "";
		for (auto i : A[0]) {
			int count = count_a(A[0], i);
			if (count_a(junk,i) != 0) {
				continue;
			}
			for (int j = 1; j < A.size(); j++) {
				int tmp = count_a(A[j], i);
				if (count > tmp) {
					count = tmp;
				}
			}
			for (int k = 0; k < count;k++) {
				string str = "";
				str.append(1, i);
				ret.push_back(str);
				junk += str;
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