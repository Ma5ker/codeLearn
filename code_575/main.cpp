#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
	int distributeCandies(vector<int>& candies) {
		set<int> tmp(candies.begin(), candies.end());
		return min(tmp.size(), candies.size() / 2);
	}
};
int main() {
	vector<int> candies = { 1, 1, 2, 3 };
	Solution sln;
	cout << sln.distributeCandies(candies);
	return 0;
}