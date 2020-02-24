#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int count = 0;
		for (auto it = nums.begin(); it != nums.end() && count < nums.size();) {
			if (*it == 0) {
				it = nums.erase(it);
				nums.push_back(0);
			}
			else {
				it++;
			}
			count++;
		}
	}
};
int main() {
	return 0;
}