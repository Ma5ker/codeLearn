#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		int ret = 0;
		if (grid.size() == 1){
			if (grid[0].size() == 1) {
				if (grid[0][0] == 1)
					return 4;
				else
					return 0;
			}
			else {
				for (auto t : grid[0]) {
					if (t == 1)
						ret++;
				}
				return (ret-2)*2+6;
			}
		}
		for (int i = 0; i < grid.size(); i++) {
			for (int j = 0; j < grid[0].size(); j++) {
				if (grid[i][j] != 1)
					continue;
				//top
				if (i - 1 < 0 || grid[i - 1][j] == 0) {
					ret++;
				}
				if (i + 1 > grid.size()-1 || grid[i + 1][j] == 0) {
					ret++;
				}
				if (j - 1 < 0 || grid[i][j - 1] == 0) {
					ret++;
				}
				if (j + 1 > grid[0].size()-1 || grid[i][j + 1] == 0) {
					ret++;
				}
			}
		}
		return ret;
	}
};
int main() {
	vector<vector<int>> grid = { {0, 1, 0, 0},{1, 1, 1, 0}, {0, 1, 0, 0}, { 1, 1, 0, 0 } };
	Solution sln;
	cout << sln.islandPerimeter(grid);
	return 0;
}