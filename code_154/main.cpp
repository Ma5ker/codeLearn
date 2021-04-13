#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
	int findMin(vector<int>& nums) {
		int i = 0;
		while (i < nums.size() - 1) {
			if (nums[i] <= nums[i + 1]) {
				i++;
			}
			else {
				break;
			}
		}
		return nums[(i + 1) % nums.size()];

	}
};

int main() {

	vector<int> nums = {5, 1,3,5 };
	Solution sln;
	int ret = sln.findMin(nums);
	cout << ret << endl;
	return 0;
}