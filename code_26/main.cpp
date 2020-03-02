#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() < 2)
			return nums.size();
		int j = 0;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[j] != nums[i])
				j++, nums[j] = nums[i];
		}
		return ++j;
	}
};
int main() {
	return 0;
}