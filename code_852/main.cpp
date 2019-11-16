#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int peakIndexInMountainArray(vector<int>& A) {
		//int index;
		//for (index = 0; index < A.size()-1;index++) {
		//	if (A[index] > A[index + 1])
		//		return index;
		//}
		//return index;
		int nPos = (int)(max_element(A.begin(), A.end()) - (A.begin()));
		return nPos;
	}
};
int main() {
	vector<int> A = { -1,0,1,1,2,3,4,5,6,2,1,0 };
	Solution sln;
	cout << sln.peakIndexInMountainArray(A);
	return 0;
}