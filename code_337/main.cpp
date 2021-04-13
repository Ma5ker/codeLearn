#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <unordered_map>
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
	unordered_map<TreeNode*, int> map;
	int rob(TreeNode* root) {
		return rt(root);

	}
	/// <summary>
	/// 当前节点作为根节点，能打劫当前节点时，最高总价值
	/// </summary>
	/// <param name="root"></param>
	/// <returns></returns>
	int rt(TreeNode* root) {
		if (root == nullptr) {
			return 0;
		}
		if (map.count(root)) {
			return map[root];
		}
		//能打劫时可以选择是否打劫
		int c1 = rt(root->left);
		int c2 = rt(root->right);
		int c3 = 0;
		int c4 = 0;
		if (root->left != nullptr) {
			c3 = rt(root->left->left) + rt(root->left->right);
		}
		if (root->right != nullptr) {
			c4 = rt(root->right->left) + rt(root->right->right);
		}

		//打劫
		int t1 = c3 + c4 + root->val;

		//不打劫
		int t2 = c1 + c2;
		map[root] = max(t1, t2);
		return map[root];
	}

};
int main() {
	Solution sln;
	//3, 2, 3, null, 3, null, 1
	TreeNode* root = new TreeNode(4);
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n2 = new TreeNode(2);
	TreeNode* n3 = new TreeNode(3);
	root->left = n1;
	n1->left = n2;
	n2->left = n3;

	cout << sln.rob(root);

	
	return 0;
}