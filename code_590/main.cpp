#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
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
	vector<int> postorder(Node* root) {
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
				for (auto i = tmp->children.begin(); i != tmp->children.end(); i++) {
					sk.push(*i);
				}
			}
		}
		reverse(ret.begin(),ret.end());
		return ret;
	}
};
int main() {
	///pass
	return 0;
}