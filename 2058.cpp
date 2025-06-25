class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> positions; 
        ListNode* prev = head;
        ListNode* curr = head->next;
        int index = 1;

        while (curr != nullptr && curr->next != nullptr) {
            int prevVal = prev->val;
            int currVal = curr->val;
            int nextVal = curr->next->val;

            if ((currVal > prevVal && currVal > nextVal) ||
                (currVal < prevVal && currVal < nextVal)) {
                positions.push_back(index);
            }

            prev = curr;
            curr = curr->next;
            index++;
        }

        if (positions.size() < 2)
            return {-1, -1};

        int minDist = INT_MAX;
        for (int i = 1; i < positions.size(); i++) {
            minDist = min(minDist, positions[i] - positions[i - 1]);
        }

        int maxDist = positions[positions.size()-1] - positions[0];
        return {minDist, maxDist};
    }
};
