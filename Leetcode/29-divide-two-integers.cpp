//29. Divide Two Integers
//Problem Link: https://leetcode.com/problems/divide-two-integers/

class Solution {
public:
    int divide(long dividend, long divisor) 
    {
       if(divisor == 1)
        {
            return dividend;
        }
        if(divisor == -1) 
        {
            return ((dividend == INT_MIN) ? INT_MAX : -dividend);
        }
        int ans = 0;
        bool neg = (((dividend >= 0) == (divisor >= 0)) ? false : true);
        dividend = abs(dividend);
        divisor = abs(divisor);
        while(dividend >= divisor)
        {
            int cnt = 0;
            while(dividend >= (divisor << (1 + cnt)))
            {  // keep increasing size of divisor
                cnt++;
            }
            ans += (1 << cnt);  // add this to ans
            dividend -= (divisor << cnt);  // decrease dividend by end size of divisor
        }
        return (neg ? -ans : ans);
    }
};