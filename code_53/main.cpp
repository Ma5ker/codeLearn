#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.size() == 1)
			return nums[0];
		int ret = nums[0];
		int dp = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			dp = max(dp + nums[i], nums[i]);
			ret = max(dp, ret);
		}
		return ret;

	}
};
int main() {
	//test ssh proxy
	//TODO
	return 0;
}