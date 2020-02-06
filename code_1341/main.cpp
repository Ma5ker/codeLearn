#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
class Solution {
public:
    static bool cmp(const pair<int,int>& x,const pair<int, int>& y) {
        if (x.second < y.second) {
            return true;
        }
        else if (x.second == y.second && x.first < y.first) {
            return true;
        }
        else {
            return false;
        }
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ret;
        map<int, int> value;
        int row = mat.size();
        for (int i = 0; i < row; i++) {
            int count = 0;
            for (auto be = mat[i].begin(); be != mat[i].end(); be++) {
                if (*be != 1) {
                    break;
                }
                count++;
            }
            value[i] = count;
        }
        vector<pair<int,int>> vec(value.begin(), value.end());
        sort(vec.begin(), vec.end(), cmp);
        for (size_t i = 0; i != k; ++i) {
            ret.push_back(vec[i].first);
        }
        return ret;
    }
};
int main() {
    vector<vector<int>> mat = { {1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 0},
                                {1, 0, 0, 0, 0},
                                {1, 1, 0, 0, 0},
                                {1, 1, 1, 1, 1} };
    Solution sln;
    vector<int> ret = sln.kWeakestRows(mat,3);
	return 0;
}