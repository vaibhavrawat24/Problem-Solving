//926. Flip String to Monotone Increasing
//Problem Link: https://leetcode.com/problems/flip-string-to-monotone-increasing/description/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flips=0,ctr=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') ctr+=1;
            else flips+=1;

            flips=min(flips,ctr);
        }
        return flips;
    }
};