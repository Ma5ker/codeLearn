#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
class Solution {
public:
	vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
		deque<int> tmp;
		for (int i = 0; i < grid.size(); i++) {
			for (int j = 0; j < grid[0].size(); j++) {
				tmp.push_back(grid[i][j]);
			}
		}
		for (int i = 0; i < k; i++) {
			tmp.push_front(tmp.back());
			tmp.pop_back();
		}
		for (int i = 0,t=0; i < grid.size(); i++) {
			for (int j = 0; j < grid[0].size(); j++, t++) {
				grid[i][j] = tmp[t];
			}
		}
		return grid;
	}
};
int main() {
	return 0;
}