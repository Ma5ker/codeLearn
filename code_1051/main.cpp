#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	int heightChecker(vector<int>& heights) {
		vector<int> cp = vector<int>(heights);
		sort(cp.begin(), cp.end());
		int count = 0;
		for (auto b = cp.begin(), h = heights.begin(); b != cp.end(); b++,h++) {
			if (*b != *h) {
				count++;
			}
		}
		return count;
	}
};

int main() {
	vector<int> height = { 1,2,1,2,1,1,1,2,1};
	Solution sln;
	cout << sln.heightChecker(height) << endl;
	return 0;
}