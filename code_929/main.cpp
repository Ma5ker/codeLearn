#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
class Solution {
public:
	int numUniqueEmails(vector<string>& emails) {
		set<string> temp;
		for (auto s : emails) {
			string tmp;
			bool flag = false;
			bool flag_2 = false;
			for (int i = 0; i < s.size(); i++) {
				if (flag == true) {
					if (s[i] == '@') {
						tmp += s[i];
						flag = false;
						flag_2 = true;
					}
				}
				else{
					if (s[i] == '@') {
						tmp += s[i];
						flag_2 = true;
						continue;
					}
					if (flag_2==false && s[i] == '.')
						continue;
					if (s[i] == '+') {
						flag = true;
						continue;
					}
					else {
						tmp += s[i];
					}
				}
			}
			temp.insert(tmp);
		}
		return temp.size();
	}
};
int main() {
	vector<string> emails = { "test.email+alex@leetcode.com", "test.email@leetcode.com"};
	Solution sln;
	cout << sln.numUniqueEmails(emails);
	return 0;
}