//2443. Sum of Number and Its Reverse
//Problem Link: https://leetcode.com/contest/weekly-contest-315/problems/sum-of-number-and-its-reverse/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    
    int rev(int n)
    {
        int ans=0;
        
        while(n>0)
        {
            ans*=10;
            ans+=n%10;
            n/=10;
        }
        
        return ans;
    }
    
    bool sumOfNumberAndReverse(int num) 
    {
        if(!num) return true;
        
        for(int i=0;i<num;i++)
        {
            if(i+rev(i)==num) return true;
        }
        
        return false;
    }
};