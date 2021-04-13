#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <unordered_set>
using namespace std;

class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		unordered_set<int> nums_set;
		for (int i = 0; i < nums.size(); i++) {
			nums_set.insert(nums[i]);
		}
		if (nums_set.size() == 0) {
			return 0;
		}

		int current_len = 0;
		int max_len = 0;

		for (int num:nums_set) {
			if (nums_set.count(num-1)){
				continue;
			}
			current_len = 1;

			while (nums_set.count(num+1)){
				current_len++;
				num++;
			}
			max_len = max(current_len, max_len);
		}
		return max_len;
	}
};
int main() {

	vector<int> nums = { 0,3,7,2,5,8,4,6,0,1 };
	Solution sln;
	cout<< sln.longestConsecutive(nums)<<endl;
	return 0;
}