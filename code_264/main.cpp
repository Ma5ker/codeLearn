#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
	int nthUglyNumber(int n) {
		vector<int> dp(n + 1);
		dp[1] = 1;
		int p2 = 1, p3 = 1, p5 = 1;
		for (int i = 2; i <= n; i++) {
			int c2 = dp[p2] * 2, c3 = dp[p3] * 3, c5 = dp[p5] * 5;
			dp[i] = min(min(c2, c3), c5);
			if (dp[i] == c2)
				p2++;
			if (dp[i] == c3)
				p3++;
			if (dp[i] == c5)
				p5++;
		}
		return dp[n];
	}
};

int main() {
	int n = 10;
	Solution sln;
	cout<< sln.nthUglyNumber(n) << endl;

	
	return 0;
}