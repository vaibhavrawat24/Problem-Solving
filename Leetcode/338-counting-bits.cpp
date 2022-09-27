//338. Counting Bits
//Problem Link: https://leetcode.com/problems/counting-bits/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        
        for(int i=1;i<=n;i++)
        {
            if(i%2==0) ans[i]=ans[i/2];
            else ans[i]=ans[i-1]+1;
        }
        
        return ans;
        
    }
}; 