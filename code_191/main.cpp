#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        //SWAR算法
        //n = (n & 0x55555555) + ((n >> 1) & 0x55555555);
        //n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
        //n = (n & 0x0F0F0F0F) + ((n >> 4) & 0x0F0F0F0F);
        //n = (n * (0x01010101) >> 24);
        //return n;
        //最简单的bitset
        return bitset<32>(n).count();
    }
};
int main() {
	return 0;
}