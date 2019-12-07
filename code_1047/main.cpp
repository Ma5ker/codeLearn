#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
	string removeDuplicates(string S) {
		for (int i = 0; i < S.size()-1;) {
			if (S.length() == 0) {
				return "";
			}
			else if (S.length() == 1) {
				return S;
			}
			if (S[i] == S[i + 1]) {
				S = S.substr(0,i)+ S.substr(i+2);
				i = i - 1;
				if (i < 0)	i = 0;
			}
			else {
				i += 1;
			}
		}
		return S;
	}
};
int main() {
	string S = "aaaaaaaa";
	Solution sln;
	cout << sln.removeDuplicates(S);
	return 0;
}