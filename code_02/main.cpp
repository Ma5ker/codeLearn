#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode * b1 = l1;
		ListNode * b2 = l2;
		ListNode * ret = (ListNode *)malloc(sizeof(ListNode));
		ret->next = NULL;
		ListNode * tmp = ret;
		int jinwei = 0;
		while (1) {
			tmp->val = b1->val + b2->val + jinwei;
			jinwei = 0;
			if (tmp->val / 10) {
				jinwei = 1;
				tmp->val = tmp->val % 10;
			}
			if (b1->next && b2->next){
				b1 = b1->next;
				b2 = b2->next;
			}
			else if ( (!b1->next) && b2->next) {
				b1->val = 0;
				b2 = b2->next;
			}
			else if ( (!b2->next) && b1->next) {
				b2->val = 0;
				b1 = b1->next;
			}
			else {
				if (jinwei != 1) {
					break;
				}
				else {
					b1->val = 0;
					b2->val = 0;
				}
			}
			ListNode * newnode = (ListNode *)malloc(sizeof(ListNode));
			newnode->next = NULL;
			tmp->next = newnode;
			tmp = tmp->next;
		}
		return ret;
	}
};


int main() {
	ListNode * a = (ListNode *)malloc(sizeof(ListNode));
	ListNode * a2 = (ListNode *)malloc(sizeof(ListNode));
	ListNode * a3 = (ListNode *)malloc(sizeof(ListNode));
	a->val = 0;
	a->next = a2;
	a2->val = 0;
	a2->next = a3;
	a3->val = 1;
	a3->next = NULL;

	ListNode * b = (ListNode *)malloc(sizeof(ListNode));
	ListNode * b2 = (ListNode *)malloc(sizeof(ListNode));
	ListNode * b3 = (ListNode *)malloc(sizeof(ListNode));
	b->val = 0;
	b->next = b2;
	b2->val = 0;
	b2->next = b3;
	b3->val = 1;
	b3->next = NULL;

	Solution sln;
	ListNode * result = sln.addTwoNumbers(a, b);
	int base = 1;
	int sum = 0;
	for (ListNode* begin = result; begin != NULL; begin = begin->next) {
		sum= begin->val * base + sum;
		base = base * 10;
	}
	std::cout << sum;
	return 0;
}