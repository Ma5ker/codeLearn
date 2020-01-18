#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    //这个好像可以递归，冷死我了(艹皿艹 )
    vector<string> letterCasePermutation(string S) {
        vector<string> ret;
        auto be = S.begin();
        if (isdigit(*be)) {
            string tmp = "a";
            tmp[0] = *be;
            ret.push_back(tmp);
        }
        else if (*be >= 'a' && *be <= 'z') {
            string tmp = "a";
            tmp[0] = *be;
            ret.push_back(tmp);
            tmp[0] = *be-32;
            ret.push_back(tmp);
        }
        else {
            string tmp = "a";
            tmp[0] = *be;
            ret.push_back(tmp);
            tmp[0] = *be + 32;
            ret.push_back(tmp);
        }

        for (auto it = S.begin() + 1; it != S.end(); it++) {
            vector<string> temp;
            if (isdigit(*it)) {
                string tmp = "a";
                tmp[0] = *it;
                temp.push_back(tmp);
            }
            else if (*it >= 'a' && *it <= 'z') {
                string tmp = "a";
                tmp[0] = *it;
                temp.push_back(tmp);
                tmp[0] = *it - 32;
                temp.push_back(tmp);
            }
            else {
                string tmp = "a";
                tmp[0] = *it;
                temp.push_back(tmp);
                tmp[0] = *it + 32;
                temp.push_back(tmp);
            }
            vector<string> strtmp;
            for (auto ii = temp.begin(); ii != temp.end(); ii++) {
                for (auto tt = ret.begin(); tt != ret.end(); tt++) {
                    strtmp.push_back(*tt + *ii);
                }
            }
            ret = strtmp;

        }
        return ret;
    }
};
int main() {
    string S = "a1b2";
    Solution sln;
    vector<string> ret = sln.letterCasePermutation(S);
	return 0;
}