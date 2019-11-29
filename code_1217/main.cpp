#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
class Solution {
public:
	int minCostToMoveChips(vector<int>& chips) {
		int ret = 65535;
		int index = 0;
		for (int i = 0; i < chips.size(); i++) {
			int tmp = 0;
			for (int j = 0; j < chips.size(); j++) {
				tmp += abs(chips[j] - chips[i]) % 2;
			}
			ret = min(ret, tmp);
		}
		return ret;
	}
};
int main() {
	vector<int> chips = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 };
	Solution sln;
	cout << sln.minCostToMoveChips(chips);
	return 0;
}