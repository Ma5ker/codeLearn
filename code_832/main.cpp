#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		for (auto be = A.begin(); be != A.end(); be++) {
			reverse((*be).begin(),(*be).end());
			for (auto te = (*be).begin(); te != (*be).end(); te++) {
				*te ^= 1;
			}
		}
		return A;
	}
};
/*
auto &&be:A
auto &&te:be
*/

int main() {
	//pass
}