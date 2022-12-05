//876. Middle of the Linked List
//Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
    public:
    ListNode* middleNode(ListNode* head) {
        ListNode* node1=head;             //first pointer that'll move 1 step at a time
        ListNode* node2=head;             //second pointer that'll move 2 steps

        while(node2!=NULL && node2->next!=NULL) 
        {
            node1=node1->next;            //when this loop ends the second pointer will be at the end of linked list
            node2=node2->next->next;      //and first pointer will be at the middle of the linked list
        }                                  

        return node1;
    }
};
