#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    //海伦公式
    double area(const vector<int>& p1, const vector<int>& p2, const vector<int>& p3) {
        int cx1 = p2[0] - p1[0];
        int cx2 = p3[0] - p1[0];
        int cy1 = p2[1] - p1[1];
        int cy2 = p3[1] - p1[1];
        return abs(cx1 * cy2 - cx2 * cy1) / 2.0;
    }
    //三重循环 有啥意义 你在逗我？？
    double largestTriangleArea(vector<vector<int>>& points) {
        int size = points.size();
        double ret = 0;
        for (int i = 0; i < size - 2; ++i) {
            for (int j = i + 1; j < size - 1; ++j) {
                for (int k = j + 1; k < size; ++k) {
                    ret = max(ret, area(points[i], points[j], points[k]));
                }
            }
        }
        return ret;
    }
};
int main() {
	return 0;
}