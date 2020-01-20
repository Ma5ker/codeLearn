#include <iostream>
#include <algorithm>
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
    vector<TreeNode*> leaf1;
    vector<TreeNode*> leaf2;
    void getLeaf(TreeNode* root, vector<TreeNode*>& leaf) {
        if (root->left == NULL && root->right == NULL) {
            leaf.push_back(root);
            return;
        }
        else {
            if (root->left != NULL) {
                getLeaf(root->left, leaf);
            }
            if (root->right != NULL) {
                getLeaf(root->right, leaf);
            }
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        getLeaf(root1, leaf1);
        getLeaf(root2, leaf2);
        int i = leaf1.size();
        if (i != leaf2.size()) {
            return false;
        }
        int count = 0;
        while (count < i && leaf1[count]->val == leaf2[count]->val) { count++; }
        return count == i;
    }
};
int main() {
    TreeNode* root1 = &TreeNode(1);
    TreeNode* node1 = &TreeNode(2);
    TreeNode* node2 = &TreeNode(3);
    TreeNode* root2 = &TreeNode(1);
    TreeNode* node3 = &TreeNode(2);
    TreeNode* node4 = &TreeNode(3);
    root1->left = node1;
    root1->right = node2;
    root2->left = node4;
    root2->right = node3;
    Solution sln;
    bool flag = sln.leafSimilar(root1, root2);
    
	return 0;
}