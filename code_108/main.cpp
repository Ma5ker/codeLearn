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
	TreeNode* gen_Tree(vector<int>& nums, int start, int end) {
		if (start > end) {
			return NULL;
		}
		int mid = (start + end) / 2;
		TreeNode* head = new TreeNode(nums[mid]);
		head->left = gen_Tree(nums, start, mid - 1);
		head->right = gen_Tree(nums, mid + 1, end);
		return head;
	}
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		if (nums.size() == 0) {
			return NULL;
		}
		return gen_Tree(nums, 0, nums.size() - 1);

	}
};
int main() {
	vector<int> nums = { -10,-3,0,5,9 };
	Solution sln;
	TreeNode* head = sln.sortedArrayToBST(nums);
	return 0;
}