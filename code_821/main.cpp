#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
class Solution {
public:
	vector<int> shortestToChar(string S, char C) {
		vector<int> ret;
		vector<int> index;
		int ind=0;
		while ( (ind = S.find(C,ind)) < S.length()) {
			index.push_back(ind);
			ind++;
		}
		for (int i = 0; i < S.length(); i++) {
			int min =S.length();
			int tmp = 0;
			for (auto be = index.begin(); be != index.end(); be++) {
				if (abs(*be - i) < min) {
					min = abs(*be - i);
				}
			}
			ret.push_back(min);
		}
		return  ret;
	}
};
int main() {
	string S = "loveleetcode";
	char C = 'e';
	Solution sln;
	vector<int> ret=sln.shortestToChar(S, C);
	return 0;
}