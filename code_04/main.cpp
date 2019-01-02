#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int size = nums1.size() + nums2.size();
		//nums1  []
		if (!nums1.size()) {
			if (size % 2 == 0) {
				return (*(nums2.begin() + size / 2) + *(nums2.begin() + size / 2 - 1)) / 2.0;
			}
			else {
				return *(nums2.begin() + size / 2);
			}
		}
		//nums2  []
		else if (!nums2.size()) {
			if (size % 2 == 0) {
				return (*(nums1.begin() + size / 2) + *(nums1.begin() + size / 2 - 1)) / 2.0;
			}
			else {
				return *(nums1.begin() + size / 2);
			}
		}
		vector<int>::iterator it1 = nums1.begin();
		vector<int>::iterator it2 = nums2.begin();
		vector<int> ret = {};
		while(1){
			if (*it1 > *it2) {
				ret.push_back(*it2);
				if (it2 == nums2.end()-1) {
					for (vector<int>::iterator it = it1; it != nums1.end(); it++) {
						ret.push_back(*it);
					}
					//median
					if (size % 2 == 0) {
						return (*(ret.begin() + size / 2) + *(ret.begin() + size / 2 - 1)) / 2.0;
					}
					else {
						return *(ret.begin() + size / 2);
					}
				}
				else {
					it2 = it2 + 1;
				}
			}
			else {
				ret.push_back(*it1);
				if (it1 == nums1.end() - 1) {
					for (vector<int>::iterator it = it2; it != nums2.end(); it++) {
						ret.push_back(*it);
					}
					//median
					if (size % 2 == 0) {
						return (*(ret.begin() + size / 2) + *(ret.begin() + size / 2 - 1)) / 2.0;
					}
					else {
						return *(ret.begin() + size / 2);
					}
				}
				else {
					it1 = it1 + 1;
				}
			}
		}
	}
};

int main() {
	vector<int> nums1 = {1,2,4,6};
	vector<int> nums2 = {1};
	Solution sln;
	double median = sln.findMedianSortedArrays(nums1, nums2);
	cout << median << endl;
}