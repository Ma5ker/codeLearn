#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Node {
public:
	int val;
	vector<Node*> children;
	Node() {}
	Node(int _val) {
		val = _val;
	}
	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};
class Solution {
public:
	int maxDepth(Node* root) {
		if (root == NULL) {
			return 0;
		}
		if (root->children.size() == 0) {
			return 1;
		}
		else{
			int max = 0;
			for (auto chl = root->children.begin(); chl != root->children.end(); chl++) {
				int tmp = maxDepth(*chl);
				if (tmp > max) {
					max = tmp;
				}
			}
			return 1 + max;
		}
	}
};
int main() {

	///pass
	return 0;
}