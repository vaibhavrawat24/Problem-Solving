//Base Equivalence
//Problem Link: https://practice.geeksforgeeks.org/problems/base-equivalence1022/1

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
  public:
    string baseEquiv(int n, int m){
        int i=2;
        
        while(i<=32)
        {
            if((int(log(n)/log(i))+1)==m) return "Yes";
            i+=1;
        }
        
        return "No";
    }
};