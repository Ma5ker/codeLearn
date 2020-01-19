#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int r, c;
bool compare(vector<int> a, vector<int> b) {
    return abs(a[0] - r) + abs(a[1] - c) < abs(b[0] - r) + abs(b[1] - c);
}
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        r = r0; c = c0;
        vector<vector<int>> ret;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                ret.push_back({i,j});
            }
        }
        sort(ret.begin(), ret.end(),compare);
        return ret;
    }
};
int main() {
    int r0 = 0, c0 = 0;
    int R = 1;
    int C = 2;
    Solution sln;
    vector<vector<int>> ret = sln.allCellsDistOrder(R, C, r0, c0);
	return 0;
}