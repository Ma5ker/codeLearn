#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
	//¿¼ÓïÎÄ ÉñËûÂè
	int removePalindromeSub(string s) {
		int len = s.length();
		if (len == 0)
			return 0;
		else {
			int i = 0, j = len - 1;
			for (; i < j;) {
				if (s[i] == s[j]) {
					i++;
					j--;
					continue;
				}
				else {
					return 2;
				}
			}
			return 1;
		}
	}
};
int main() {
	return 0;
}