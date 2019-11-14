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
	TreeNode* searchBST(TreeNode* root, int val) {
		if (root == NULL || root->val==val) {
			return root;
		}else{
			if (root->val > val) {
				return searchBST(root->left,val);
			}
			else {
				return searchBST(root->right,val);
			}
		}
		//µü´ú
		//while (root != NULL) {
		//	if (root->val == val) {
		//		return root;
		//	}
		//	else if (root->val > val) {
		//		root = root->left;
		//	}
		//	else {
		//		root = root->right;
		//	}
		//}
		//return NULL;
	}
};
int main() {
	//PASS
	return 0;
}