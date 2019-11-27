#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		vector<int> ret;
		for (auto be = nums1.begin(); be != nums1.end(); be++) {
			vector<int>::iterator it1 = find(nums2.begin(), nums2.end(), *be);
			vector<int>::iterator it2 = find(ret.begin(), ret.end(), *be);
			if (it1 != nums2.end() and it2== ret.end()) {
				ret.push_back(*be);
			}

		}
		return ret;
	}
};
int main() {
	vector<int> nums1 = { 1,2,2,1 };
	vector<int> nums2 = { 2,2 };
	Solution sln;
	vector<int> ret = sln.intersection(nums1, nums2);

	return 0;
}