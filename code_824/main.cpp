#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
class Solution {
public:
	string toGoatLatin(string S) {
		string ret;
		istringstream stext(S);
		string tt;
		string hou = "a";
		while (stext >> tt) {
			if (tt[0]=='a' || tt[0] == 'e' || tt[0] == 'i' || tt[0] == 'o' || tt[0] == 'u' || tt[0] == 'A' || tt[0] == 'E' || tt[0] == 'I' || tt[0] == 'O' || tt[0] == 'U') {
				ret += tt + "ma";
			}
			else {
				ret += tt.substr(1) + tt.substr(0, 1) + "ma";
			}
			ret += hou+ " ";
			hou += "a";
		}
		return ret.substr(0,ret.length()-1);
	}
};
int main() {
	string text = "I speak Goat Latin";
	Solution sln;
	cout << sln.toGoatLatin(text);
	return 0;
}