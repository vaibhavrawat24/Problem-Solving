//58. Prime List
//Problem Link: https://practice.geeksforgeeks.org/problems/6cb0782855c0f11445b8d70e220f888e6ea8e22a/1

//time Complexity: O(n^2)
//Space Complexity: O(1)

class Solution{
public:
    bool isPrime(int n)
    {
        if(n<=1) return false;

        for(int i=2;i*i<=n;i++) 
        {
            if(n%i==0) return false;
        }
        
        return true;
    }

    int nearestPrime(int n)
    {
        int prime1=0,prime2=0;
        
        if(n==1) return 2;
        
        for(int i=n;i>1;i--)
        {
            if(isPrime(i))
            {
                prime1=i;
                break;
            }
        }
        
        for(int i=n;i<n*n;i++)
        {
            if(isPrime(i))
            {
                prime2=i;
                break;
            }
        }
        
        if(abs(n-prime1)>abs(n-prime2)) return prime2;
        else if(abs(n-prime1)<abs(n-prime2)) return prime1;
        else
        {
            if(prime1>prime2) return prime2;
            else return prime1;
        }
    }

    Node *primeList(Node *head){
        Node* curr=head;
        
        while(curr)
        {
            if(!isPrime(curr->val))
            {
                int new_val=nearestPrime(curr->val);
                curr->val=new_val;
            }
            curr=curr->next;
        }
        
        return head;
    }
};