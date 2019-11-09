#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
	bool judgeCircle(string moves) {
		int x = 0, y = 0;
		for (auto be = moves.begin(); be != moves.end(); be++) {
			switch (*be) {
				case 'U':
					y -= 1;break;
				case 'D':
					y += 1; break;
				case 'L':
					x -= 1; break;
				case 'R':
					x += 1; break;
			}
		}
		if ((x == 0) && (y == 0))
			return true;
		return false;
	}
};

int main() {
	string moves = "UD";
	string mos = "LL";
	Solution sln;
	cout << sln.judgeCircle(mos) << endl;
	return 0;
}