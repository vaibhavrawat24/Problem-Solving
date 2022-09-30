//Find the Safe Position
//Problem Link: https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle1840/1

//Time Complexity:
//Space Complexity:

class Solution {
  public:
    int safePos(int n, int k) {
        if(n==0)
        {
           return 1;
        }
        else
        {
            return(safePos(n-1,k)+k-1)%n+1;      
         }
    }
    
    int safe(int n,int k)
    {
        return(safePos(n,k)+1);
    }
    
};