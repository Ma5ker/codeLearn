#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
	static bool cmp(const pair<int, int>& v1, const pair<int, int>& v2) {
		return v1.second < v2.second;
	}
	int twoCitySchedCost(vector<vector<int>>& costs) {
		int ret = 0;
		int count = 0;
		map<int, int> tmp;
		for (int i = 0; i < costs.size(); i++) {
			tmp[i] = costs[i][0] - costs[i][1];
		}
		vector<pair<int, int>> tp(tmp.begin(), tmp.end());
		sort(tp.begin(), tp.end(), cmp);
		for (auto it = tp.begin(); it != tp.end(); it++) {
			count++;
			if (count <= costs.size() / 2)
				ret += costs[(*it).first][0];
			else
				ret += costs[(*it).first][1];
		}
		return ret;
	}
};
int main() {
	return 0;
}