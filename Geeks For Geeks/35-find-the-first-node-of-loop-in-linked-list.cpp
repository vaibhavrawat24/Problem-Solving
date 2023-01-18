//35 Find the first node of loop in linked list
//Problem Link: https://practice.geeksforgeeks.org/problems/44bb5287b98797782162ffe3d2201621f6343a4b/1

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        unordered_map<Node*,int> mp;
        Node* temp=head;
        mp[temp]+=1;
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
            if(mp[temp]!=0) return temp->data;
            else mp[temp]+=1;
        }
        
        return -1;
    }
};