#include <iostream>
#include <algorithm>
#include<sstream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ret;
        ///×Ö·ûÁ÷
        istringstream stext(text);
        string tt;
        int count = 2;
        while (stext>>tt) {
            if (tt == first && count==2) {
                count--;
            }
            else if (tt == first && count == 1) {
                count = 1;
            }
            else if(tt==second && count==1){
                count--;
            }
            else if (count == 0) {
                ret.push_back(tt);
                if (tt == first) {
                    count = 1;
                }
                else {
                    count = 2;
                }
            }
            else {
                count = 2;
            }
        }
        return ret;
    }
};
int main() {
    string text = "alice is a good girl she is a good student";
    string first = "a";
    string second = "good";
    Solution sln;
    vector<string> ret = sln.findOcurrences(text, first, second);
	return 0;
}