#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
蠢了 ，这是二叉搜索树，题目没看清，直接 右 中 左遍历就可以了。
*/
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
//class Solution {
//private:
//	vector<int> val;
//public:
//	void travel(bool calc,TreeNode* root) {
//		if (root == NULL)
//			return;
//		else{
//			if (calc == false) {
//				val.push_back(root->val);
//			}
//			else {
//				int sum = 0;
//				for (auto it = val.begin(); it != val.end(); it++) {
//					if ((*it) > root->val) {
//						sum += (*it);
//					}
//					else {
//						root->val = root->val + sum;
//						break;
//					}
//				}
//			}
//			travel(calc, root->left);
//			travel(calc, root->right);
//		}
//
//	}
//    TreeNode* convertBST(TreeNode* root) {
//		//遍历一次找出所有节点值
//		if (root == NULL) {
//			return NULL;
//		}
//		travel(false, root);
//		sort(val.begin(), val.end(),greater<int>());
//		travel(true, root);
//		return root;
//    }
//};
class Solution {
public:
	void travel(TreeNode* root, int& sum) {
		if (root == NULL) {
			return;
		}
		travel(root->right, sum);
		root->val += sum;
		sum = root->val;
		travel(root->left, sum);
	}
	TreeNode* convertBST(TreeNode* root) {
		int sum = 0;
		travel(root, sum);
		return root;
	}
};
int main() {
	TreeNode* root = &TreeNode(5);
	TreeNode* node1 = &TreeNode(2);
	TreeNode* node2 = &TreeNode(13);
	root->left = node1;
	root->right = node2;
	Solution sln;
	TreeNode* ret = sln.convertBST(root);
	return 0;
}