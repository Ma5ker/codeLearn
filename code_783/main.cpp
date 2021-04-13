#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <math.h>
#include <stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	vector<int> val;
	int minDiffInBST(TreeNode* root) {
		searchTree(root);
		int min_val = INT_MAX;
		for (int i = 0; i < val.size()-1; i++) {
			int tmp = abs(val[i] - val[i + 1]);
			min_val = min_val < abs(val[i] - val[i + 1])?min_val:abs(val[i] - val[i + 1]);
		}
		return min_val;
	}
	void searchTree(TreeNode* root) {
		if (root == nullptr)
			return;
		if (root->left != nullptr)
			searchTree(root->left);
		val.push_back(root->val);
		if (root->right != nullptr)
			searchTree(root->right);
		return;
	}



};
int main() {


	
	return 0;
}