#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <math.h>
using namespace std;

class Solution {
public:
	static int mycmp(int v1, int v2) {
		string s1 = to_string(v1);
		string s2 = to_string(v2);

		int sz1 = s1.size();
		int sz2 = s2.size();
		unsigned long int v_12 = v2 + pow(10, sz2) * v1;
		unsigned long int v_21 = v1 + pow(10, sz1) * v2;
		return v_12 > v_21;

	}
	string largestNumber(vector<int>& nums) {

		sort(nums.begin(), nums.end(),mycmp);
		string tmp = "";
		for (int sstr : nums)
		{
			tmp += to_string(sstr);
		}
		return tmp;
	}
};

int main() {

	vector<int> nums = {999999991,9};
	Solution sln;
	cout << sln.largestNumber(nums);
	
	return 0;
}