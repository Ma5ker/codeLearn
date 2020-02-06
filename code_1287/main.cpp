#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        int current = arr[0], count = 0;
        for (int i = 0; i < size; i++) {
            if (current == arr[i]) {
                count++;
                if (count * 4 > size) {
                    return current;
                }
            }
            else {
                current = arr[i];
                count = 1;
            }
        }
        return -1;
    }
};
int main() {
	return 0;
}