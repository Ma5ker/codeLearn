#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        ///最简单的方法莫过于直接拼接A和B 找出现一次的  淦
        int sizea = A.size();
        int sizeb = B.size();
        vector<string> ga;
        vector<string> gb;
        vector<string> ret;
        string tmp = "";
        if (sizea != 0) {
            for (int i = 0; i < sizea; i++) {
                if (A[i] != ' ') {
                    tmp += A[i];
                
                }
                else {
                    ga.push_back(tmp);
                    tmp = "";
                }
            }
            ga.push_back(tmp);
        }
        tmp = "";
        if (sizeb != 0) {
            for (int i = 0; i < sizeb; i++) {
                if (B[i] != ' ') {
                    tmp += B[i];

                }
                else {
                    gb.push_back(tmp);
                    tmp = "";
                }
            }
            gb.push_back(tmp);
        }

        for (auto str : ga) {
            if (count(ga.begin(), ga.end(), str) == 1) {
                if (find(gb.begin(), gb.end(), str) == gb.end()) {
                    ret.push_back(str);
                }
            }
        }

        for (auto str : gb) {
            if (count(gb.begin(), gb.end(), str) == 1) {
                if (find(ga.begin(), ga.end(), str) == ga.end()) {
                    ret.push_back(str);
                }
            }
        }
        return ret;

    }
};
int main() {
    string A = "abcd def abcd xyz", B = "ijk def ijk";
    Solution sln;
    vector<string> ret = sln.uncommonFromSentences(A,B);
	return 0;
}