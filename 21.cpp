
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* c = new ListNode(100);
        ListNode* tempc = c;
        while (temp1 != NULL && temp2 != NULL) {
            if (temp1->val >= temp2->val) {
                ListNode* t = new ListNode(temp2->val);
                tempc->next = t;
                tempc = t;
                temp2 = temp2->next;
            } else {
                ListNode* t = new ListNode(temp1->val);
                tempc->next = t;
                tempc = t;
                temp1 = temp1->next;
            }
        }
        if (temp1 == NULL) {
            tempc->next = temp2;
        } else if (temp2 == NULL) {
            tempc->next = temp1;
        }
        return c->next;
    }
};
