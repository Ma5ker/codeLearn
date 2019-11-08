#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		vector<string> dit = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
		set<string> dd = {};
		for (auto be = words.begin(); be != words.end();be++) {
			string tmp = "";
			for (int i = 0; i < (*be).size();i++) {
				tmp += dit[(*be)[i] - 'a'];
			}
			dd.insert(tmp);
		}
		return dd.size();
	}
};

int main() {
	vector<string> words = { "gin", "zen", "gig", "msg" };
	Solution sln;
	cout << sln.uniqueMorseRepresentations(words) << endl;
	return 0;
}
