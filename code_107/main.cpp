#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<TreeNode*> node;
    vector<vector<int>> ret;
    void getChild(vector<TreeNode*> parent) {
        vector<int> tmp;
        vector<TreeNode*> node_tmp;
        for (auto be = parent.begin(); be != parent.end(); be++) {
            if (*be == NULL) {
                continue;
            }
            else {
                //�����ֵ����
                tmp.push_back((*be)->val);
                //�ӽڵ����
                node_tmp.push_back((*be)->left);
                node_tmp.push_back((*be)->right);
            }
        }
        if (tmp.size() == 0) {
            return;
        }
        ret.push_back(tmp);
        node = vector<TreeNode*>(node_tmp);
        getChild(node);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        node.push_back(root);
        getChild(node);
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
int main() {
    return 0;
}