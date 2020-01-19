#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    vector<TreeNode*> path;
    vector<string> path_trace;
    void drawpath(TreeNode * root) {
        path.push_back(root);
        if (root->left == NULL && root->right == NULL) {
            string ret = "";
            for (auto it = path.begin(); it != path.end()-1;it++) {
                ret = ret + to_string((*it)->val) + "->";
            }
            ret = ret = ret + to_string(path.back()->val);
            path_trace.push_back(ret);
        }
        else if (root->left == NULL) {
            drawpath(root->right);
        }
        else if (root->right == NULL) {
            drawpath(root->left);
        }
        else {
            drawpath(root->left);
            drawpath(root->right);
        }
        path.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == NULL) {
            return path_trace;
        }
        drawpath(root);
        return path_trace;
    }
};
int main() {
	return 0;
}