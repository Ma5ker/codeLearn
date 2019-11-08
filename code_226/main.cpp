#include <iostream>
#include <vector>
using namespace std;



struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (root == NULL) {
			return root;
		}
/*		if (root->left == NULL && root->right==NULL) {
			return root;
		}
		if (root->left == NULL) {
			root->left = invertTree(root->right);
			root->right = NULL;
			return root;
		}
		if (root->right == NULL) {
			root->right = invertTree(root->left);
			root->left = NULL;
			return root;
		}
*/
		TreeNode* tmp = root->left;
		root->left = invertTree(root->right);
		root->right = invertTree(tmp);
		return root;

	}
};


int main() {
	/*
	TreeNode* root = &TreeNode(4);
	TreeNode n1(2);
	TreeNode n2(7);
	TreeNode n3(1);
	TreeNode n4(3);
	TreeNode n5(6);
	TreeNode n6(9);
	root->left = &n1; root->right = &n2;
	n1.left = &n3;
	n1.right = &n4;
	n2.left = &n5;
	n2.right = &n6;
	Solution sln;
	TreeNode* tmp = sln.invertTree(root);
	*/
	TreeNode* root = &TreeNode(4);
	TreeNode n1(2);
	root->left = NULL;
	root->right = &n1;
	Solution sln;
	TreeNode* tmp = sln.invertTree(root);
	return 0;

}