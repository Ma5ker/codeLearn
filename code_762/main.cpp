#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	int countPrimeSetBits(int L, int R) {
		int ret = 0;
		vector<int> prime = { 2,3,5,7,11,13,17,19 };
		for (int i = L; i <= R; i++) {
			int count = 0;
			int index = i;
			while (index != 0) {
				if (index % 2 == 1) {
					count++;
				}
				index = index / 2;
				// n & (n-1)
			}
			vector<int>::iterator it = find(prime.begin(), prime.end(), count);
			if (it != prime.end()) {
				ret += 1;
			}
		}
		return ret;
	}
};
int main() {
	int L = 10;
	int R = 15;
	Solution sln;
	cout << sln.countPrimeSetBits(10, 15);
	return 0;
}