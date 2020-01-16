#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        int size = ret.size();
        for (auto be = nums1.begin(); be != nums1.end(); be++) {
            int flag = -1;
            for (auto te = nums2.begin(); te != nums2.end(); te++) {
                if (flag == 1) {
                    if (*te > * be) {
                        ret.push_back(*te);
                        break;
                    }
                }
                else if (flag == -1) {
                    if (*te == *be) {
                        flag = 1;
                    }
                }
            }
            if (ret.size() == size) {
                ret.push_back(-1);
                size++;
            }
        }
    }
};
int main() {
	return 0;
}