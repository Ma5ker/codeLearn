#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
/*
class Solution {
public:
	bool isUnivalTree(TreeNode* root) {
		if (root->left != NULL && root->right != NULL) {
			if (!(root->left->val == root->val && root->right->val == root->val)) {
				return false;
			}
			else {
				return isUnivalTree(root->left) && isUnivalTree(root->right);
			}
		}
		else if(root->left==NULL && root->right==NULL) {
			return true;
		}
		else if (root->left==NULL) {
			return (root->right->val == root->val) && isUnivalTree(root->right);
		}
		else {
			return (root->left->val == root->val) && isUnivalTree(root->left);
		}
	}
};
*/
class Solution {
public:
	bool isUnivalTree(TreeNode* root) {
		static int value=root->val;
		if (root == NULL) {
			return true;
		}
		else {
			return (root->val == value) && isUnivalTree(root->left) && isUnivalTree(root->right);
		}
	}
};
int main() {
	TreeNode root = { 0 };
	TreeNode n1 = { 1 };
	TreeNode n2 = { 0 };
	TreeNode n3 = { 0 };
	root.left = &n1;
	root.right = &n2;
	n1.left = &n3;
	Solution sln;
	bool flag = sln.isUnivalTree(&root);
	return 0;
}