#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string toLowerCase(string str) {
		for (auto be = str.begin(); be != str.end(); be++) {
			*be |= 32;
		}
		return str;
	}
};
int main() {
	string str = "DFSdfjdskl";
	Solution sln;
	cout << sln.toLowerCase(str) << endl;
	return 0;
}