//1137. N-th Tribonacci Number
//Problem Link: https://leetcode.com/problems/n-th-tribonacci-number/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int tribonacci(int n) {
       int a=0,b=1,c=1;
        if(n==0 || n==1)
            return n;
        if(n==2)
            return 1;
        int k=3,temp;
        while(k<=n)
        {
            temp=a+b+c;
            a=b;
            b=c;
            c=temp;
            k++;
        }
        return c;
    }
};