#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int ret = 0;
        map<char, int> num_map;
        int size = s.size();
        num_map['I'] = 1;
        num_map['V'] = 5;
        num_map['X'] = 10;
        num_map['L'] = 50;
        num_map['C'] = 100;
        num_map['D'] = 500;
        num_map['M'] = 1000;
        for (int i = 0; i < size; ++i)
        {
            if (num_map[s[i]] >= num_map[s[i + 1]])
            {
                ret += num_map[s[i]];
            }
            else
            {
                ret -= num_map[s[i]];
            }
        }
        return ret;
    }
};
int main() {
	return 0;
}