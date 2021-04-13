#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		if (matrix.size() == 1) {
			return;
		}

		/*rotate  step 1:*/
		int n = matrix.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				int tmp = matrix[i][j];
				matrix[i][j] = matrix[n - 1 - j][n - 1 - i];
				matrix[n - 1 - j][n - 1 - i] = tmp;
			}
		}
		/*rotate  step 2:*/
		for(int i = 0; i < n / 2; i++){
			for (int j = 0; j < n; j++) {
				int tmp = matrix[i][j];
				matrix[i][j] = matrix[n - 1 - i][j];
				matrix[n - 1 - i][j] = tmp;

			}
		}


	}
};
int main() {


	
	return 0;
}