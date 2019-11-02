#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int game(vector<int>& guess, vector<int>& answer) {
		int score = 0;
		for (auto be = guess.begin(), be2 = answer.begin(); be != guess.end(); ++be, ++be2) {
			if (*be == *be2) {
				score++;
			}
		}
		return score;
	}
};
int main() {
	vector<int> guess = { 1,2,3 };
	vector<int> answer = { 1,2,3 };
	Solution sln;
	cout << sln.game(guess, answer) << endl;
	return 0;
}