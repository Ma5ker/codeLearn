#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) {
            return true;
        }
        int r = matrix.size();
        int c = matrix[0].size();

        for (int i = 0; i < r; i++) {
            int tmp = matrix[i][0];
            for (int j = 0; j + i < r && j < c; j++) {
                if (matrix[i + j][0 + j] != tmp) {
                    return false;
                }
            }
        }

        for (int i = 0; i < c; i++) {
            int tmp = matrix[0][i];
            for (int j = 0; j + i < c && j < r; j++) {
                if (matrix[0 + j][i + j] != tmp) {
                    return false;
                }
            }
        }
        return true;

    }
};
int main() {
    vector<vector<int>> tr = { {1, 2, 3, 4}, { 5, 1, 2, 3 }, { 9, 5, 1, 2 } };
    Solution sln;
    bool ret = sln.isToeplitzMatrix(tr);
	return 0;
}