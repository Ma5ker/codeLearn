#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int score = 0;
		auto be = S.begin();
		for (; be != S.end(); be++) {
			if (J.find(*be) != string::npos) {
				score++;
			}
		}
		return score;
	}
};

int main() {
	string J = "abc";
	string S = "abcdffdCa";
	Solution sln;
	cout << sln.numJewelsInStones(J, S) << endl;
	return 0;
}