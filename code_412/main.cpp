#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        for (int i = 1; i < n + 1; i++) {
            if (i % 3 == 0 && n % 5 == 0) {
                ret.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                ret.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                ret.push_back("Buzz");
            }
            else {
                ret.push_back(to_string(i));
            }
        }
        return ret;
    }
};
int main() {
    Solution sln;
    vector<string> ret = sln.fizzBuzz(3);
	return 0;
}