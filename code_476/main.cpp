#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
	int findComplement(int num) {
		int count = 0;
		int ret = 0;
		while (num / 2) {
			ret += (1 ^ (num % 2)) * pow(2,count);
			count ++ ;
			num = num / 2;
		}
		ret += (1 ^ (num % 2)) * pow(2, count);
		return ret;
	}
};
int main() {
	int x = 5;
	Solution sln;
	cout << sln.findComplement(x) << endl;
	return 0;
}