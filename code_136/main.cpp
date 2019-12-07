#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ret = 0;
		for (auto i : nums) {
			ret ^= i;
		}
		return ret;
	}
};
int main() {
	vector<int> nums = { 1,2,3,3,2 };
	Solution sln;
	cout << sln.singleNumber(nums);
	return 0;
}