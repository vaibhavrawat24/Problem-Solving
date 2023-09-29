// 25. Reverse nodes in k group
// Problem Link: https://leetcode.com/problems/reverse-nodes-in-k-group/description/

// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution
{
public:
    void reversee(vector<int> &v, int n, int k)
    {
        int c = n / k;
        int i = 0;
        while (c)
        {
            reverse(v.begin() + i, v.begin() + i + k);
            i += k;
            c--;
        }
    }

    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL)
            return NULL;

        if (head->next == NULL)
            return head;

        vector<int> v;
        ListNode *temp = head;

        while (temp != NULL)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int n = v.size();

        reversee(v, n, k);

        ListNode *q = head;

        for (int i = 0; i < n; i++)
        {
            q->val = v[i];
            q = q->next;
        }

        return head;
    }
};