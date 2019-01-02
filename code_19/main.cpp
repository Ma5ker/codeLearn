#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode * first = head;
		ListNode * second = head;
		ListNode * tmp = head;
		int i = 0;
		while (first->next) {
			first = first->next;
			i += 1;
			if (i > n - 1) {
				//保存上一个节点
				tmp = second;
				second = second->next;
			}
		}
		if (second == head) {
			return second->next;
		}
		tmp->next = second->next;
		return head;
	}
	/*空间换时间???*/
	//ListNode* removeNthFromEnd(ListNode* head, int n) {
	//	ListNode * listNodeArray[n + 1] = {};
	//	listNodeArray[0] = head;
	//	ListNode * cur_node = head;
	//	int ct = 0;
	//	while (cur_node->next)
	//	{
	//		cur_node = cur_node->next;
	//		if (++ct >= n + 1)
	//			ct %= n + 1;
	//		listNodeArray[ct] = cur_node;
	//	}
	//	if (!listNodeArray[(ct + 1) % (n + 1)])
	//		return listNodeArray[(ct + 3) % (n + 1)];//new head
	//	if (n == 1)
	//		listNodeArray[(ct + 1) % (n + 1)]->next = NULL;
	//	else
	//		listNodeArray[(ct + 1) % (n + 1)]->next = listNodeArray[(ct + 3) % (n + 1)];
	//	return head;

	//}

};


int main() {
	ListNode *a = (ListNode *)malloc(sizeof(ListNode));
	ListNode *a1 = (ListNode *)malloc(sizeof(ListNode));
	ListNode *a2 = (ListNode *)malloc(sizeof(ListNode));
	ListNode *a3 = (ListNode *)malloc(sizeof(ListNode));
	ListNode *a4 = (ListNode *)malloc(sizeof(ListNode));
	a->val = 1;
	a1->val = 2;
	a2->val = 3;
	a3->val = 4;
	a4->val = 5;
	a->next = a1;
	a1->next = a2;
	a2->next = a3;
	a3->next = a4;
	a4->next = NULL;
	Solution sln;
	sln.removeNthFromEnd(a, 2);
}