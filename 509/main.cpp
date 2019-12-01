#include <iostream>
#include <algorithm>
using namespace std;
//class Solution {
//public:
//	int fib(int N) {
//		if (N == 0)
//			return 0;
//		if (N == 1)
//			return 1;
//		return fib(N - 1) + fib(N - 2);
//	}
//};
class Solution {
public:
	int fib(int N) {
		//动态规划更好
		if (N == 1 || N == 2) return 1;
		int pre = 0;
		int pre_2 = 1;
		int ret = 0;
		for (int i = 2; i <= N; i++) {
			ret = pre + pre_2;
			pre = pre_2;
			pre_2 = ret;
		}
		return ret;
	}
};
int main() {
	Solution sln;
	cout << sln.fib(27) << endl;
	return 0;
}