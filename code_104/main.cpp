#include <iostream>
#include <algorithm>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
	int maxDepth(TreeNode* root) {
		int count = 0;
		if (root == NULL) {
			return 0;
		}
		//int x1 = maxDepth(root->left);
		//int x2 = maxDepth(root->right);
		//return max(x1, x2) +1;
		return max(maxDepth(root->left), maxDepth(root->right)) + 1;
	}
};

int main() {
	///pass
}