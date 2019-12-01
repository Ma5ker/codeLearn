#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int numRookCaptures(vector<vector<char>>& board) {
		int r_i = 0;
		int r_j = 0;
		for (int i = 0; i < board.size();i++) {
			for (int j = 0; j < board[0].size(); j++) {
				if (board[i][j]=='R') {
					r_i = i;
					r_j = j;
				}
			}
		}
		//ÉÏ±ß
		int count = 0;
		for (int i = r_i-1; i>=0; i--) {
			if (board[i][r_j] == 'p') {
				count++;
				break;
			}
			if (board[i][r_j] == 'B') {
				break;
			}
		}
		//ÏÂ±ß
		for (int i = r_i + 1; i < board.size(); i++) {
			if (board[i][r_j] == 'p') {
				count++;
				break;
			}
			if (board[i][r_j] == 'B') {
				break;
			}
		}
		//×ó±ß
		for (int j = r_j - 1; j >= 0; j--) {
			if (board[r_i][j] == 'p') {
				count++;
				break;
			}
			if (board[r_i][j] == 'B') {
				break;
			}
		}
		//ÓÒ±ß
		for (int j = r_j +1; j <board[0].size(); j++) {
			if (board[r_i][j] == 'p') {
				count++;
				break;
			}
			if (board[r_i][j] == 'B') {
				break;
			}
		}
		return count;
	}
};

int main() {
	vector<vector<char>> board = {
		{'.', '.', '.', '.', '.', '.', '.', '.'}, 
		{'.', '.', '.', 'p', '.', '.', '.', '.'}, 
		{'.', '.', '.', 'p', '.', '.', '.', '.'}, 
		{'p', 'p', '.', 'R', '.', 'p', 'B', '.'}, 
		{'.', '.', '.', '.', '.', '.', '.', '.'}, 
		{'.', '.', '.', 'B', '.', '.', '.', '.'}, 
		{'.', '.', '.', 'p', '.', '.', '.', '.'}, 
		{'.', '.', '.', '.', '.', '.', '.', '.'}};
	Solution sln;
	cout << sln.numRookCaptures(board);
	return 0;
}