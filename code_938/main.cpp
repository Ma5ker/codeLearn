#include <iostream>
using namespace std;


struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:

	int shTree(TreeNode* node,int sum,int L,int R) {
		if (node->left != NULL) {
			sum = shTree(node->left, sum,L,R);
			
		}
		if (node->right != NULL) {
			sum = shTree(node->right,sum,L,R);
		}
		if (node->val >= L and node->val <= R) {
			sum += node->val;
		}
		return sum;
	}
	int rangeSumBST(TreeNode* root, int L, int R) {
		return shTree(root, 0, L, R);
	}
};

int main() {
	TreeNode* root=& TreeNode(10);
	TreeNode node1(5);
	TreeNode node2(15);
	TreeNode node3(3);
	TreeNode node4(7);
	TreeNode node5(18);
	root->left = &node1;
	root->right = &node2;
	node1.left = &node3;
	node1.right = &node4;
	node2.right = &node5;
	Solution sln;
	cout << sln.rangeSumBST(root, 7, 15) << endl;
}
