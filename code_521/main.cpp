#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	int findLUSlength(string a, string b) {
		if (a == b)
			return -1;
		if (a.length() < b.length())
			return b.length();
		else
			return a.length();
	}
};
int main() {
	///????
	return 0;
}