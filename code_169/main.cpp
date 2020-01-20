#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Ñ°ÕÒ¶àÊı
        int ret = nums.front();
        int count = 1;
        for (int num : nums) {
            if (num == ret) {
                count++;
            }
            else {
                count--;
                if (count == 0) {
                    ret = num;
                    count = 1;
                }
            }
        }
        return ret;
    }
};
int main() {
	return 0;
}