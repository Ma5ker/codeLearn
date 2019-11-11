#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};

class Solution {
public:
	vector<int> preorder(Node* root) {
		vector<int> ret = {};
		stack<Node*> sk = {};
		if (root == NULL) {
			return ret;
		}
		sk.push(root);
		while (!sk.empty()) {
			//Node* tmp(sk.top());
			auto tmp = sk.top();
			sk.pop();
			ret.push_back(tmp->val);
			if (!tmp->children.empty()) {
				for (auto i = tmp->children.end() - 1; i != tmp->children.begin(); i--) {
					sk.push(*i);
				}
				sk.push((*tmp).children[0]);
			}
		}
		return ret;
	}
};

int main() {
	///
	return 0;
}