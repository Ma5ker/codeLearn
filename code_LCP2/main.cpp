#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> fraction(vector<int>& cont) {
        vector<int> ret;
        ret.push_back(1);
        ret.push_back(0);
        for (int i = cont.size() - 1; i >= 0; i--) {
            int tmp = ret[1];
            ret[1] = ret[0];
            ret[0] = cont[i] * ret[1] + tmp;
        }
        return ret;
    }
};
int main() {
    vector<int> can = { 3, 2, 0, 2 };
    Solution sln;
    vector<int> ret = sln.fraction(can);
	return 0;
}