//61. Rotate List
//Problem Link: https://leetcode.com/problems/rotate-list/description/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        
        int n=1;

        ListNode* temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
            n+=1;
        }

        temp->next=head;
        k=k%n;
        k=n-k;

        while(k--) temp=temp->next;

        head=temp->next;
        temp->next=NULL;

        return head;


    }
};