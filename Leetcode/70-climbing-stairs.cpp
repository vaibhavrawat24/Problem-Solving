//70. Climbing Stairs
//Problem Link:

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int climbStairs(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int one=1,two=0,result=0;

        for(int i=0;i<=n;i++)
        {
            result=one+two;
            one=two;
            two=result;
        }

        return result;
    }
};