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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return nullptr;

        ListNode* dummy = head;
        int count = 0 ;

        for(; dummy!=nullptr;dummy=dummy->next) count++;

        int index = count-n;
        
        dummy = head;
        if(index == 0 ) {
            dummy = head->next;
            delete head;
            return dummy;
        }
        for(int i = 0 ; i<index-1;i++){
            dummy =dummy->next;
        }
        ListNode* ex = dummy->next;
        dummy->next=dummy->next->next;
        delete ex;
        return head;
    }
};