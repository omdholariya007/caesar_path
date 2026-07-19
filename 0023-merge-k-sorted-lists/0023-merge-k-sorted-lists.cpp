class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.size() == 0) return nullptr;
        if (lists.size() == 1) return lists[0];

        ListNode dummy(0);
        ListNode* a = &dummy;

        int j = 0;

        for (int count = 1; count > 0; ) {

            // move j to a valid list
            if (lists[j] == nullptr) {
                j++;
                if (j >= lists.size()) break;
                continue;
            }

            int x = lists[j]->val;
            int minIndex = j;
            count = 0;

            // nested loop (your logic)
            for (int i = 0; i < lists.size(); i++) {
                if (lists[i] != nullptr) {
                    count++;
                    if (lists[i]->val < x) {
                        x = lists[i]->val;
                        minIndex = i;
                    }
                }
            }

            // append to result list
            a->next = new ListNode(x);
            a = a->next;

            // advance chosen list (same idea as yours)
            lists[minIndex] = lists[minIndex]->next;
        }

        return dummy.next;
    }
};
