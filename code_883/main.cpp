#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <bitset>
using namespace std;
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ret = 0;
        int n = grid.size();
        int xz = 0;
        int yz = 0;
        for (int i = 0; i < n; i++) {
            xz = 0;
            yz = 0;
            for (int j = 0; j < n; j++) {
                xz = max(xz, grid[i][j]);
                yz = max(yz, grid[j][i]);
                if (grid[i][j] > 0) {
                    ret += 1;
                }
            }
            ret += xz + yz;
        }
        return ret;

    }
};
int main() {
	return 0;
}