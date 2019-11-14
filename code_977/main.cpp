#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		for (auto be = A.begin(); be != A.end(); be++) {
			*be = (*be) * (*be);
		}
		sort(A.begin(), A.end());
		return A;
	}
};

int main() {
	vector<int> A = { -24,-24,-22,-21,-20,-20,-10,-7,-4,-4,-4,-3,3,10,10,11,12,14,14,16,20,21,22,22,24 };
	Solution sln;
	vector<int>B =sln.sortedSquares(A);
	return 0;
}