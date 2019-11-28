#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	vector<vector<int>> transpose(vector<vector<int>>& A) {
		vector<vector<int>> ret;
		for (int j = 0; j < A[0].size(); j++) {
			vector<int> tmp;
			for (int i = 0; i < A.size(); i++) {
				tmp.push_back(A[i][j]);
			}
			ret.push_back(tmp);
		}
		return ret;
	}
};
int main() {
	vector<vector<int>> A = { {1, 2, 3},{4, 5, 6} };
	Solution sln;
	vector<vector<int>> ret = sln.transpose(A);
	return 0;
}