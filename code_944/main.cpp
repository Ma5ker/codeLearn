#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	int minDeletionSize(vector<string>& A) {
		bool flag = true;
		int ret = 0;
		int col = A.size();
		int row = A[0].size();
		for (int i = 0; i < row; i++) {
			flag = true;
			for (int j = 0; j < col-1; j++) {
				if (A[j][i] > A[j + 1][i]) {
					flag = false;
					break;
				}

			}
			if (flag == false) {
				ret++;
			}
		}
		return ret;
	}
};
int main() {
	vector<string> A = { "cba", "daf", "ghi" };
	Solution sln;
	cout << sln.minDeletionSize(A);
	return 0;
}