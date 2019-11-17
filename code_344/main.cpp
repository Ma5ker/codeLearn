#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
	void reverseString(vector<char>& s) {
		//reverse(s.begin(),s.end());
		//Ë«Ö¸Õë
		if (s.size() > 0)
		{
			auto p = s.begin();
			auto q = s.end() - 1;
			while (p < q) {
				char tmp = *p;
				*p = *q;
				*q = tmp;
				p++;
				q--;
			}
		}
	}
};
int main() {
	vector<char> s = { 'h','e','l','l','o' };
	Solution sln;
	sln.reverseString(s);
	return 0;
}