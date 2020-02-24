#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		if (stones.size() <= 1)
		{
			return stones[0];
		}
		sort(stones.begin(), stones.end(), greater<int>());
		while (stones[1] != 0)
		{
			stones[0] = stones[0] - stones[1];
			stones[1] = 0;
			sort(stones.begin(), stones.end(), greater<int>());
		}
		return stones[0];
	}
};
int main() {
	return 0;
}