class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL)return;
        ListNode* k = head;
        while(k->next!=NULL && k->next->next != NULL){
            ListNode* curr=k->next;
            ListNode* prev=NULL;
            while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            }
            k->next = prev;
            k=k->next;
        }
        return ;
    }
};
