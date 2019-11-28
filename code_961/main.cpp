#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		auto i = A.begin();
		for (; i != A.end(); i++) {
			if (count(A.begin(), A.end(), *i) == A.size() / 2) {
				break;
			}
		}
		return *i;
	}
};
int main() {
	vector<int> A = { 1, 2, 3, 3 };

	Solution sln;
	cout << sln.repeatedNTimes(A) << endl;
	return 0;
}