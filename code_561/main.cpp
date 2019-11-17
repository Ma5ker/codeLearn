#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		int sum = 0;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++) {
			if (i % 2 == 0) {
				sum += nums[i];
			}
		}
		return sum;
	}
};
int main() {
	vector<int> nums = { 1,4,3,2 };
	Solution sln;
	cout << sln.arrayPairSum(nums)<<endl;
	return 0;
}