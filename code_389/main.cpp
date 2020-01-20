#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1 = 0;
        int sum2 = 0;
        for (auto ch : s) {
            sum1 += ch;
        }
        for (auto chh : t) {
            sum2 += chh;
        }
        int cha = abs(sum1 - sum2);
        return (char)cha;
    }
};
int main() {
	return 0;
}