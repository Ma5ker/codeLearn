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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root != NULL) {
            if (root->val < L) {
                root = trimBST(root->right, L, R);
            }
            else if (root->val > R) {
                root = trimBST(root->left, L, R);
            }
            else {
                root->left = trimBST(root->left, L, R);
                root->right = trimBST(root->right, L, R);

            }
        }
        return root;
    }
};
int main() {
    Solution sln;
    //TreeNode* ret = sln.trimBST();
	return 0;
}