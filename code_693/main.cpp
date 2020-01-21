#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool hasAlternatingBits(int n) {
        ///trick
        unsigned int temp = n ^ (n >> 1); return (temp & (temp + 1)) == 0;
    }
};
int main() {
	return 0;
}