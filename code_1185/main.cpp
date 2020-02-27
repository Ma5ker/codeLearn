#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
	string dayOfTheWeek(int day, int month, int year) {
		//»ùÄ·À­¶ûÉ­nb
		vector<string> tmp = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
		if (month == 1 || month == 2) month += 12, year--;

		int iWeek = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
		return tmp[iWeek];
	}
};
int main() {
	return 0;
}