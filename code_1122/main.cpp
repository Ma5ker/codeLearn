#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
		vector<int> ret;
		for (auto be = arr2.begin(); be != arr2.end();) {
			auto it = find(arr1.begin(), arr1.end(), (*be));
			if (it == arr1.end()) {
				be++;
			}
			else {
				ret.push_back(*be);
				arr1.erase(it);
			}
		}
		sort(arr1.begin(), arr1.end());
		for (auto i : arr1) {
			ret.push_back(i);
		}
		return ret;
	}
};
int main() {
	vector<int> arr1 = { 2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19 }, arr2 = { 2, 1, 4, 3, 9, 6 };
	Solution sln;
	vector<int> ret = sln.relativeSortArray(arr1, arr2);
	return 0;
}