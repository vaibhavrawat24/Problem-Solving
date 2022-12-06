//328. Odd Even Linked List
//Problem Link: https://leetcode.com/problems/odd-even-linked-list/description/

//Time complexity: O(n)
//Space Compelxity: O(1)

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;

        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=even;

        while(even!=NULL && even->next!=NULL)
        {
            odd->next=even->next;
            odd=even->next;
            even->next=odd->next;
            even=odd->next;
        }

        odd->next=evenhead;
        return head;
    }
};