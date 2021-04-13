#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
	bool isUgly(int n) {
		if (n == 0) {
			return false;
		}
		vector<int> t = { 2,3,5 };
		for (int s:t)
		{
			while (n%s==0)
			{
				n = n / s;
			}
		}
		return n == 1;

	}
};

int main() {
	Solution sln;
	cout<< sln.isUgly(11)<<endl;
	return 0;
}