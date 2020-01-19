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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //vector<TreeNode*> pr1;//两者的父节点列表
        //vector<TreeNode*> pr2;
        //if (root == NULL) {
        //    return NULL;
        //}
        //TreeNode* tmp = root;
        ////找两个的父节点
        //while (tmp->val != p->val) {
        //    pr1.push_back(tmp);
        //    if (tmp->val > p->val) {
        //        tmp = tmp->left;
        //    }
        //    else {
        //        tmp = tmp->right;
        //    }
        //}
        //pr1.push_back(tmp);

        //TreeNode* temp = root;
        //while (temp->val != q->val) {
        //    pr2.push_back(temp);
        //    if (temp->val > q->val) {
        //        temp = temp->left;
        //    }
        //    else {
        //        temp = temp->right;

        //    }
        //}
        //pr2.push_back(temp);

        //for (auto it = pr1.begin(); it != pr1.end(); ) {
        //    bool flag = false;
        //    for (auto itt = pr2.begin(); itt != pr2.end(); itt++) {
        //        if ((*it)->val == (*itt)->val) {
        //            flag = true;
        //            break;
        //        }
        //    }
        //    if (flag != true) {
        //        it = pr1.erase(it);
        //    }
        //    else {
        //        it++;
        //    }
        //}
        //return pr1.back();
        //利用搜索二叉树的性质
        if (p->val == root->val) {
            return p;
        }
        else if (q->val == root->val) {
            return q;
        }
        else {
            if (p->val > root->val&& q->val > root->val) {
                return lowestCommonAncestor(root->right, p, q);
            }
            else if (p->val < root->val && q->val < root->val) {
                return lowestCommonAncestor(root->left, p, q);
            }
            else {
                return root;
            }
        }
    }
};
int main() {
    TreeNode* root = &TreeNode(6);
    TreeNode* node1 = &TreeNode(2);
    TreeNode* node2 = &TreeNode(8);
    TreeNode* node3 = &TreeNode(0);
    TreeNode* node4 = &TreeNode(4);
    TreeNode* node5 = &TreeNode(7);
    TreeNode* node6 = &TreeNode(9);
    TreeNode* node7 = &TreeNode(3);
    TreeNode* node8 = &TreeNode(5);
    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left = node5;
    node2->right = node6;
    node4->left = node7;
    node4->right = node8;
    Solution sln;
    TreeNode* ret = sln.lowestCommonAncestor(root, node1, node2);
	return 0;
}