#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int ret = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (target > nums[i]) {
				ret++;
			}
			else {
				break;
			}
		}
		return ret;
	}
};
int main() {
	return 0;
}