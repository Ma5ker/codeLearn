#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ret;
		for (vector<int>::iterator it = nums.begin(); it < nums.end()-1; it++) {
			for (vector<int>::iterator ig = it + 1; ig < nums.end(); ig++) {
				if (*it + *ig == target) {
					ret.push_back( it-nums.begin());
					ret.push_back(ig-nums.begin());
					return ret;
				}
			}
		}
		return {0};
	}
};

int main() {
	vector<int> nums = {2, 7, 10, 11};
	Solution sl;
	vector<int> vet = sl.twoSum(nums, 9);
	for (vector<int>::iterator it = vet.begin(); it < vet.end(); it++) {
		cout << *it<<"  ";
	}
}