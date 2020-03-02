#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		//Ë«Ö¸Õë
		int index_1 = 0;
		int index_2 = 0;
		while (index_1 < nums.size()) {
			if (nums[index_1] != val)
				nums[index_2] = nums[index_1],index_2++;
			index_1++;
		}
		return index_2;
	}
};
int main() {
	return 0;
}