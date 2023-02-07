//46. Remove loop in Linked List
//Problem Link: https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* slow=head,*fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast) 
            {
                break;
            }
        }
        
        if(fast==NULL || fast->next==NULL) return;
        
        fast=head;
        
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        while(slow->next!=fast) slow=slow->next;
        
        slow->next=NULL;
        
        return;
    }
};