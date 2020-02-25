#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	int bitwiseComplement(int N) {
		if (N == 0) return 1;
		long ff = 1;
		while (ff <= N) {
			ff = ff << 1;
		}
		return ff - N - 1;
	}
};
int main() {
	return 0;
}