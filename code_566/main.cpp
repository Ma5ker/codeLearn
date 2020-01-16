#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (nums.size() == 0)
            return nums;
        if (r * c != nums.size() * nums[0].size())
            return nums;
        vector<vector<int>> ret;
        vector<int> tmp;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0;j < nums[0].size(); j++) {
                tmp.push_back(nums[i][j]);
                if (tmp.size() == c) {
                    ret.push_back(vector<int>(tmp));
                    tmp.erase(tmp.begin(), tmp.end());
                }
            }
        }
        return ret;

    }
};
int main() {
	return 0;
}