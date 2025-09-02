class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* temp=head;
        int len=0;
        ListNode* tail = NULL;
        while(temp!=NULL){
            if(temp->next==NULL)tail=temp;
            len++;
            temp=temp->next;   
        }
        if(k==0)return head;
        k=k%len;
        int idx = len-k;
        temp = head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};