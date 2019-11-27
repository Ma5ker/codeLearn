#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;
class Solution {
public:
	bool uniqueOccurrences(vector<int>& arr) {
		map<int, int> tmp;
		for (auto be = arr.begin(); be != arr.end(); be++) {
			tmp[*be]++;
		}
		set<int> cut;
		for (auto i : tmp) {
			cut.insert(i.second);
		}
		return cut.size() == tmp.size();
	}
};
int main() {
	///pass
	return 0;
}