#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int profit = 0;
		int min_price=INT_MAX;
		for (int i = 0; i < prices.size(); i++) {
			if (prices[i] < min_price)
				min_price = prices[i];
			else {
				if (prices[i] - min_price > profit)
					profit = prices[i] - min_price;
			}
		}

		return profit;
	}
};
int main() {
	return 0;
}