#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    //???
    int maxNumberOfBalloons(string text) {
        vector<int> count = { 0,0,0,0,0 };
        for (auto i = text.begin(); i != text.end(); i++) {
            switch (*i) {
            case 'b':
                count[0]++;
                break;
            case 'a':
                count[1]++;
                break;
            case 'l':
                count[2]++;
                break;
            case 'o':
                count[3]++;
                break;
            case 'n':
                count[4]++;
                break;
            default:
                continue;
            }
        }
        count[2] = count[2] / 2;
        count[3] = count[3] / 2;

        int min = count[0];
        for (int i = 0; i < 5; i++) {
            if (count[i] < min) {
                min = count[i];
            }
        }
        return min;
    }
};
int main() {
	return 0;
}