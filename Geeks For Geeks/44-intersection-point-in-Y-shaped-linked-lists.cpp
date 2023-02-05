//44 Intersection Point in Y Shaped Linked Lists
//Problem Link: https://practice.geeksforgeeks.org/problems/eae1fbd0ac8f213a833d231e26ba4d829e79dd9c/1

//Time Complexity:
//Space Complexity:

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        if(head1 == NULL || head2 == NULL) return -1;
        
        Node* p = head1;
        while(p->next != NULL) 
            p = p->next;
            
        p->next = head2;
        
        Node *slow = head1, *fast = head1;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) break;
        }
        
        if(fast == NULL) return -1;
        
        fast = head1;
        
        while(fast != NULL) {
            slow = slow->next;
            fast = fast->next;
            if(slow == fast) break;
        }
        
        return slow->data;
    }
};