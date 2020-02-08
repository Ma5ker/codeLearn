#include <iostream>
#include <algorithm>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ret;
        ListNode* tmp;
        if (l1 == NULL) {
            return l2;
        }
        if(l2==NULL) {
            return l1;
        }
        if (l1->val <= l2->val) {
            ret = l1;
            tmp = l1;
            l1 = l1->next;
        }
        else {
            ret = l2;
            tmp = l2;
            l2 = l2->next;
        }
        while (l1!=NULL || l2!= NULL) {
            if(l2 == NULL){
                tmp->next = l1;
                l1 = l1->next;
                tmp = tmp->next;
            }
            else if (l1 == NULL) {
                tmp->next = l2;
                l2 = l2->next;
                tmp = tmp->next;
            }
            else if (l1->val <= l2->val) {
                tmp->next = l1;
                l1 = l1->next;
                tmp = tmp->next;
            }
            else if (l1->val > l2->val) {
                tmp->next = l2;
                l2 = l2->next;
                tmp = tmp->next;
            }
        }
        return ret;
    }
};
int main() {
    ListNode* root1 = &ListNode(1);
    ListNode* root2 = &ListNode(1);
    ListNode* node1 = &ListNode(2);
    ListNode* node2 = &ListNode(4);
    ListNode* node3 = &ListNode(3);
    ListNode* node4 = &ListNode(4);
    root1->next = node1;
    root1->next = node2;
    root2->next = node3;
    root2->next = node4;
    Solution sln;
    ListNode* ret = sln.mergeTwoLists(root1, root2);
	return 0;
}