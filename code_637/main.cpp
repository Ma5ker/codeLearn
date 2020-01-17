#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ret;
        if (root == NULL) {
            return ret;
        }
        ret.push_back(root->val);
        stack<TreeNode*> tmp;//存放下一级节点
        stack<TreeNode*> childnode;
        tmp.push(root->left);
        tmp.push(root->right);
        while(1) {
            childnode.swap(tmp);
            //stack<TreeNode*> childnode = stack<TreeNode*>(tmp);//存放当前节点
            
            double avg = 0;
            int count = 0;
            while (!childnode.empty()) {
                TreeNode* node = childnode.top();
                childnode.pop();
                if (node == NULL) {
                    continue;
                }
                else {
                    tmp.push(node->left);
                    tmp.push(node->right);
                    avg += node->val;
                    count++;
                }
            }
            if (count == 0) {
                return ret;
            }
            avg = avg / count;
            ret.push_back(avg);
        }
    }
};
int main() {
    TreeNode* root = &TreeNode(3);
    TreeNode* node1 = &TreeNode(9);
    TreeNode* node2 = &TreeNode(20);
    TreeNode* node3 = &TreeNode(15);
    TreeNode* node4 = &TreeNode(7);
    root->left = node1;
    root->right = node2;
    node2->left = node3;
    node2->right = node4;
    Solution sln;
    vector<double> ret = sln.averageOfLevels(root);
	return 0;
}