#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
	vector<string> findWords(vector<string>& words) {
		vector<string> ret;
		vector<string> dict = {"qwertyuiop","asdfghjkl","zxcvbnm"};
		for (auto be = words.begin(); be != words.end(); be++) {
			string tmp = *be;
			std::transform(tmp.begin(), tmp.end(),tmp.begin(), ::tolower);
			bool flag = true;
			int index = 0;
			if (dict[0].find(tmp[0])!= dict[0].npos) {
				index = 0;
			}
			else if(dict[1].find(tmp[0]) != dict[1].npos){
				index = 1;
			}
			else {
				index = 2;
			}
			for (auto te = tmp.begin()+1; te != tmp.end(); te++) {
				if (dict[index].find((*te)) == dict[index].npos) {
					flag = false;
				}
			}
			if (flag != false) {
				ret.push_back(*be);
			}
		}
		return ret;
	}
};
int main() {
	vector<string> words = { "Hello", "Alaska", "Dad", "Peace" };
	Solution sln;
	vector<string> lines = sln.findWords(words);
	return 0;
}