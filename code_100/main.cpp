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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        else {
            if (p == NULL && q != NULL)
                return false;
            if (p != NULL && q == NULL)
                return false;
			if (p->val != q->val) {
				return false;
			}
			else {
				return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
			}
        }
    }
};
int main() {
	return 0;
}