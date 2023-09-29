// 160. Intersection of Two Linked Lists
// Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/

// Time Complexity: O(2M)
// Space Complexity: O(1)

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == NULL || headB == NULL)
            return NULL;

        ListNode *a = headA;
        ListNode *b = headB;

        while (a != b)
        {
            a = a == NULL ? headB : a->next;
            b = b == NULL ? headA : b->next;
        }

        return a;
    }
};