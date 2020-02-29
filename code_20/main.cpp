#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		int len = s.length();
		if (0 == len)
			return true;
		stack<char> tmp;
		int count = 0;
		bool flag = true;
		while (count < len) {
			char t = 's';
			switch (s[count])
			{
			case '(':
			case '{':
			case '[':
				tmp.push(s[count]);
				break;
			case ')':
				if (tmp.size() == 0) {
					flag = false;
					break;
				}
				t = tmp.top();
				tmp.pop();
				if (t != '(')
					flag = false;
				break;
			case ']':
				if (tmp.size() == 0) {
					flag = false;
					break;
				}
				t = tmp.top();
				tmp.pop();
				if (t != '[')
					flag = false;
				break;
			case '}':
				if (tmp.size() == 0) {
					flag = false;
					break;
				}
				t = tmp.top();
				tmp.pop();
				if (t != '{')
					flag = false;
				break;
			default:
				break;
			}
			if (flag == false)
				break;
			count++;
		}
		if (tmp.size() != 0)
			return false;
		return flag;
	}
};
int main() {
	string s = "()";
	Solution sln;
	bool ret = sln.isValid(s);
	return 0;
}