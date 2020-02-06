#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    bool hasZero(int n) {
        while (n / 10) {
            if (n % 10 == 0) {
                return false;
            }
            n = n / 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ret;
        for (int i = 1; i <= n / 2; i++) {
            if (hasZero(i) && hasZero(n-i)) {
                ret.push_back(i);
                ret.push_back(n-i);
                return ret;
            }
        }
        return ret;
    }
};
int main() {
    int n = 10000;
    Solution sln;
    vector<int> ret = sln.getNoZeroIntegers(n);
	return 0;
}