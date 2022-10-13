//237. Delete Node in a Linked List
//Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list/

//Time Complexity: O(1)
//Space Complexity: O(1)

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};