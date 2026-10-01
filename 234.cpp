class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>vec;
        while(head!=NULL){vec.push_back(head->val);head=head->next;}
        int i=0;int j=vec.size()-1;
        while(i<=j){
            if(vec[i]!=vec[j])return false;
            i++;j--;
        }
        return true;
    }
};
