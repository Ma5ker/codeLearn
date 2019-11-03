#include <iostream>
#include <memory>
using namespace std;
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	void deleteNode(ListNode* node) {
		node->val = node->next->val;
		node->next = node->next->next;
	}
};

int main() {
	ListNode n1(4);
	ListNode n2(5);
	ListNode n3(1);
	ListNode n4(9);
	ListNode* head = &n1;
	n1.next = &n2;
	n2.next= &n3;
	n3.next = &n4;
	Solution sln;
	sln.deleteNode(&n2);
	do{
		cout << head->val;
		head = head->next;
	} while (head != NULL);
	return 0;

}