#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> ret;
		if (numRows == 0) {
			return ret;
		}
		ret.push_back({1});
		if (numRows == 1) {
			return ret;
		}
		ret.push_back({ 1,1 });
		if (numRows == 2) {
			return ret;
		}
		//numsRows > 2
		vector<int> last_one = { 1,1 };
		for (int i = 2; i < numRows; i++) {
			vector<int> cur_one;
			//压入第一个
			cur_one.push_back(1);
			for (int j = 1; j < i; j++) {
				cur_one.push_back(last_one[j-1]+last_one[j]);
			}
			cur_one.push_back(1);
			ret.push_back(cur_one);
			last_one = cur_one;
		}
		return ret;
	}
};
int main() {
	int numsRows = 5;
	Solution sln;
	vector<vector<int>> ret = sln.generate(numsRows);
	return 0;
}