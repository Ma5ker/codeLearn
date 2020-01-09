#include <iostream>
#include <algorithm>
#include <vector>
#include <String>
using namespace std;
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int count = 1;
        int sum = 0;
        int width = 0;
        for (auto be = S.begin(); be != S.end(); be++) {
            char t = (*be);
            width = widths[t - 'a'];
            sum += width;
            if (sum > 100) {
                count++;
                sum = width;
            }
        }
        return vector<int>{count, sum};
    }
};
int main() {
    vector<int> widths = { 4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
    string S = "bbbcccdddaaa";
    Solution sln;
    vector<int> ret = sln.numberOfLines(widths, S);
    return 0;
}