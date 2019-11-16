#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	bool divisorGame(int N) {
		//³¬Ê±
		//bool ret = false;
		//int i = 1;
		//while (i!=N) {
		//	if (N % i == 0)
		//		ret = ret || (!divisorGame(N - i));
		//	i++;
		//}
		//return ret;
		return !(N % 2);
	}
};

int main() {
	Solution sln;
	cout << sln.divisorGame(100) << endl;
	return 0;
}