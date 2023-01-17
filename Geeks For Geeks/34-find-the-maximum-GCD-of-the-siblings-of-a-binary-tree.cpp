//34 Find the maximum GCD of the siblings of a Binary Tree
//Problem Link: https://practice.geeksforgeeks.org/problems/6eb51dc638ee1b936f38d1ab4b2f7062d4425463/1

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution
{
public:
    int maxi=0,res=0;
    int maxGCD( Node* root)
    {
        if(root==NULL) return maxi;
        
        if(root->left && root->right)
        {
            int gc=__gcd(root->left->data,root->right->data);
            if(gc>maxi)
            {
                maxi=gc;
                res=root->data;
            }
            else if(gc==maxi) res=max(res,root->data);
        }
        
        maxGCD(root->left);
        maxGCD(root->right);
        return res;
    }
};