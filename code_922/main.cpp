#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> sortArrayByParityII(vector<int>& A) {
		for (int i = 0, j = 1; i < A.size()-1 and j < A.size();){
			if (A[i] % 2 == 0 and A[j] % 2 != 0) {
				j = j + 2;
				i = i + 2;
			}
			else if (A[i] % 2 == 0 and A[j] % 2 == 0) {
				i = i + 2;
			}
			else if (A[i] % 2 != 0 and A[j] % 2 != 0) {
				j = j + 2;
			}
			else {
				int tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
				j = j + 2;
				i = i + 2;
			}
		}
		return A;
	}
};
int main() {
	//pass
	return 0;
}