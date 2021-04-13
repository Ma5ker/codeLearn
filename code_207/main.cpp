#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
	bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
		unordered_set<int> result;
		vector<int> edge(numCourses, 0);
		vector<vector<int>> child(numCourses);

		for (vector<int> pr : prerequisites) {
			edge[pr[0]]++;
			child[pr[1]].push_back(pr[0]);
		}

		int count = 0;
		while (1)
		{
			count = result.size();
			for (int i = 0; i < edge.size(); i++) {
				if (edge[i] == -1) {
					continue;
				}
				if (edge[i] == 0) {
					result.insert(i);
					edge[i] = -1;
					for (int s:child[i])
					{
						if(edge[s]!=0)
							edge[s]--;
					}
				}
			}
			if (count == result.size()) {
				break;
			}
		}
		if (result.size() == numCourses)
			return true;
		return false;

	}
};

int main() {
	vector<vector<int>> prerequisites = { {2, 0}, { 1, 0 }, { 3, 1 }, { 3, 2 }, { 1, 3 } };
	Solution sln;
	cout<<sln.canFinish(4, prerequisites)<<endl;
	
	return 0;
}