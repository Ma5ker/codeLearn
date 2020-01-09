#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        vector<ListNode*> ll;
        ll.push_back(tmp);
        int count = 1;
        while (tmp->next != NULL) {
            tmp = tmp->next;
            ll.push_back(tmp);
            count++;
        }
        count = count / 2;
        return ll[count];
    }
};
int main() {
    ListNode* node1 = &ListNode(1);
    ListNode* node2 = &ListNode(2);
    ListNode* node3 = &ListNode(3);
    ListNode* node4 = &ListNode(4);
    ListNode* node5 = &ListNode(5);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    Solution sln;
    ListNode* ret = sln.middleNode(node1);
    return 0;
}