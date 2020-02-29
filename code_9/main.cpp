#include <iostream>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		if (x>=0 && x<=9)
			return true;
		if (x < 0)
			return false;
		int len = 0;
		long t = 1;
		while (x > t) {
			len++;
			t = 10 * t;
		}
		int mid = len / 2;
		int count = 0;
		if (mid * 2 == len) {
			int temp = 0;
			while (count < mid) {
				temp += pow(10, mid-count-1) * (x % 10);
				x = x / 10;
				count++;
			}
			if (temp == x)
				return true;
			return false;
		}
		else {
			int temp = 0;
			while (count <= mid) {
				temp += pow(10, mid - count) * (x % 10);
				if (count == mid) {
					count++;
					continue;
				}
				count++;
				x = x / 10;
			}
			if (temp == x)
				return true;
			return false;
		}
	}
};
int main() {
	int x = 1331;
	Solution sln;
	sln.isPalindrome(x);
	return 0;
}