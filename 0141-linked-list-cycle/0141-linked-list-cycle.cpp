/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int>mp;
        for( ;head;head=head->next){
            if(mp.contains(head))return 1;
            else mp[head]++;
        }
        return 0;
    }
};