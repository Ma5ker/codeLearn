#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        //这题直接看的解，这题目太无聊了吧。。。
        int n = (int)(sqrt(candies * 2.0 + 0.25) - 0.5);
        int left = candies - ((n & 1) ? (n + 1) / 2 * n : n / 2 * (n + 1));
        int mod = n % num_people;
        int div = n / num_people;
        vector<int> res(num_people);
        for (int i = 0; i < mod; ++i)
        {
            res[i] = (div + 1) * (i + 1) + div * (div + 1) / 2 * num_people;
        }
        for (int i = mod; i < num_people; ++i)
        {
            res[i] = div * (i + 1) + div * (div - 1) / 2 * num_people;
        }
        res[mod] += left;
        return res;
        
    }
};
int main() {
    int candies = 7, num_people = 4;
    Solution sln;
    vector<int> ret = sln.distributeCandies(candies, num_people);
	return 0;
}