/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = head;
        if (!head || !head->next) return head;
        if(head->next)head = head->next;
        ListNode* ro = nullptr;
        while(dummy != nullptr &&dummy->next!= nullptr ) {
            ListNode* ss = dummy->next->next ;
            ListNode* bs = dummy->next;
            
            
            bs->next = dummy;
            dummy->next = ss;
            if(ro) ro->next = bs;
            ro = dummy;
            dummy = ss;
        }
        
        return head;
    }
};