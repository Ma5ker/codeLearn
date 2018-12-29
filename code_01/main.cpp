#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ret;
		for (vector<int>::iterator it = nums.begin(); it < nums.end(); it++) {

		}
		return ret;
	}
};

int main() {
	vector<int> nums = {2, 7, 10, 11};
	Solution sl;
	vector<int> vet = sl.twoSum(nums, 9);
	for (vector<int>::iterator it = nums.begin(); it < nums.end(); it++) {
		cout << *it<<endl;
	}
}