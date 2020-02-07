#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int binaryGap(int N) {
        vector<int> index;
        int count = 0;
        while (N / 2) {
            if (N % 2 == 1) {
                index.push_back(count);
            }
            count++;
            N = N / 2;
        }
        if (N == 1) {
            index.push_back(count);
        }
        if (index.size() <= 1) {
            return 0;
        }
        int ret = 0;
        int pre = *(index.begin());
        
        for (auto be = index.begin()+1; be != index.end(); be++) {
            if ((*be) - pre > ret) {
                ret = (*be) - pre;
            }
            pre = (*be);
        }
        return ret;
    }
};
int main() {
    int N = 22;
    Solution sln;
    int ret = sln.binaryGap(N);
	return 0;
}