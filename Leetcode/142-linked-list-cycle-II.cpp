//142. Linked List Cycle II
//Problem Link: https://leetcode.com/problems/linked-list-cycle-ii/description/

//Time Complexity:
//Space complexity:

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr; 
        
        ListNode *tortoise = head, *hare = head;
        while (hare && hare->next) {
            tortoise = tortoise->next;
            hare = hare->next->next;
            if (tortoise == hare) { 
                hare = head;
                while (tortoise != hare) 
                {
                    tortoise = tortoise->next;
                    hare = hare->next;
                }
                return hare; 
            }
        }
        return nullptr; 

        
    }     
};