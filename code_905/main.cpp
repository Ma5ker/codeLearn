#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> sortArrayByParity(vector<int>& A) {
		for (auto be = A.begin(), ed = A.end()-1; be != ed;) {
			if ((*be % 2 != 0) && (*ed % 2 == 0)) {
				int tmp = *be;
				*be = *ed;
				*ed = tmp;
			}
			else if (*be % 2 == 0) {
				be++;
			}
			else if (*ed % 2 != 0) {
				ed--;
			}
		}
		return A;
	}
};
int main() {
	vector<int> A = { 1,2,3,4,5,6 };
	Solution sln;
	vector<int> B = sln.sortArrayByParity(A);
	return 0;
}