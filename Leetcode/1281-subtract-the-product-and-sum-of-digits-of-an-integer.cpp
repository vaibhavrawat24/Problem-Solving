//1281. Subtract the Product and Sum of Digits of an Integer
//Problem Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

//Time Complexity:
//Space complexity:

class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> v;
        while(n!=0)
        {
            v.push_back(n%10);
            n=n/10;
        }
        
      
        int product=accumulate(v.begin(), v.end(), 1, multiplies<int>());
        int sum=accumulate(v.begin(),v.end(),0);
        
        return product-sum;
    }
};