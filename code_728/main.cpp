#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {
		vector<int> ret = {};
		for (auto i = left; i <= right; i++) {
			int tmp = i;
			int flag = 0;
			do {
				if((tmp % 10 == 0) || (i % (tmp % 10) != 0)) {
					flag = 1;
					break;
				}
			} while (tmp = (tmp / 10));
			if (flag == 1) {
				continue;
			}
			else {
				ret.push_back(i);
			}
		}
		return ret;
	}
};



int main() {
	Solution sln;
	vector<int> ret = sln.selfDividingNumbers(1, 22);
	return 0;
}