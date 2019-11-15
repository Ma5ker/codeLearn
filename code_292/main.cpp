#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

class Solution {
public:
	bool canWinNim(int n) {
		if (n <= 3) {
			return true;
		}
		//µÝ¹é³¬Ê±
		//return (!canWinNim(n - 1)) || (!canWinNim(n - 2)) || (!canWinNim(n - 3));
		return n & 3;
		//ÄÔ¾­¼±×ªÍä£¿£¿£¿


	}
};

int main() {
	int s = 42;
	Solution sln;
	cout << sln.canWinNim(s) << endl;
	return 0;
}