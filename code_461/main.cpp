#include <iostream>
using namespace std;

class Solution {
public:
	int hammingDistance(int x, int y) {
		int ret = x ^ y;
		int count = 0;
		while (ret / 2 != 0) {
			if (ret % 2 == 1) {
				count++;
			}
			ret = ret / 2;
		}
		if (ret == 1) {
			count++;
		}
		return count;
	}
};
/*
ret >>= 1;
*/

int main() {
	int x = 1;
	int y = 4;
	Solution sln;
	cout << sln.hammingDistance(x, y) << endl;
	return 0;
}