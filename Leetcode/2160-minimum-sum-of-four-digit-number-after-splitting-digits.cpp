//2160. Minimum Sum of Four Digit Number After Splitting Digits
//Problem Link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num!=0)
        {
            v.push_back(num%10);
            num=num/10;
        }
        
        sort(v.begin(),v.end());
        int res=v[0]*10+v[2];
        int ans=v[1]*10+v[3];
        
        return res+ans;
    }
};