#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string defangIPaddr(string address) {
		int len = address.size();
		string ret="";
		for (int i = 0; i < len; i++) {
			if (address[i] == '.') {
				ret.push_back('[');
				ret.push_back('.');
				ret.push_back(']');
			}
			else {
				ret.push_back(address[i]);
			}
		}
		return ret;
	}
};

int main() {
	string ip = "1.1.1.1";
	Solution sln;
	cout << sln.defangIPaddr(ip) << endl;
}