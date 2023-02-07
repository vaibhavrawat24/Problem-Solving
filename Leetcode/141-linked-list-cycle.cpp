//141. Linked List Cycle
//Problem Link: https://leetcode.com/problems/linked-list-cycle/description/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    bool cycle(ListNode *slow,ListNode * fast)
    {
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)
            {
                return true;
                break;
            }
        }

        return false;
    }

    bool hasCycle(ListNode *head) {
        return cycle(head,head);    
    }
};