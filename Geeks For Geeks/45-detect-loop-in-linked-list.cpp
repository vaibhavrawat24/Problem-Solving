//45. Detect Loop in linked list
//Problem Link: https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

//Time complexity: O(n)
//Space complexity: O(1)

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *slow=head,*fast=head;
        
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
};