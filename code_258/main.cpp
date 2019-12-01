#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
	int addDigits(int num) {
		int ret = num;
		while (ret >= 10) {
			int tmp = 0;
			while (ret / 10) {
				tmp = tmp + ret % 10;
				ret = ret / 10;
			}
			tmp += ret;
			ret = tmp;
		}
		return ret;

	}
};
int main() {
	int nums = 38;
	Solution sln;
	cout << sln.addDigits(nums);
	return 0;
}