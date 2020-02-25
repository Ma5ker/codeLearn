#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> goodnum = {0,1,2, 5, 6, 9 };
	bool isgood(int n) {
		vector<int> tmp;
		while (n / 10) {
			tmp.push_back(n % 10);
			n = (n - n % 10)/10;
		}
		tmp.push_back(n);
		bool flag = false;
		for (int i = 0; i < tmp.size(); i++) {
			vector<int>::iterator it;
			it = find(goodnum.begin(), goodnum.end(), tmp[i]) ;
			if (it== goodnum.end()) {
				return false;
			}
			else if ((*it)!=1 && (*it)!=0 && (*it) != 8) {
				flag = true;
			}
		}
		return flag;
	}
	int rotatedDigits(int N) {
		int count = 0;
		for (int i = 1; i <= N; i++) {
			if (isgood(i)) {
				count++;
			}
		}
		return count;
	}
};
int main() {
	int N = 10;
	Solution sln;
	cout << sln.rotatedDigits(N);
	return 0;
}