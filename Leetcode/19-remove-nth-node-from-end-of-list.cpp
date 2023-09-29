// 19. Remove nth node from end of list
// Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// Time complexity: O(max(n,L))
// Space Complexity: O(1)

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *start = new ListNode();
        start->next = head;
        ListNode *slow = start;
        ListNode *fast = start;

        for (int i = 0; i < n; i++)
            fast = fast->next;

        while (fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return start->next;
    }
};