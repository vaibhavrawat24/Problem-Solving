//Nth Fibonacci Number
//Problem Link: https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?page=1&difficulty[]=0&status[]=unsolved&category[]=Dynamic%20Programming&sortBy=submissions

//time Complexity: O(n)
//Space Complexity: O(n)

#define ll long long int

class Solution {
  public:
    long long int nthFibonacci(long long int n){
        ll ans=0,mod=1e9+7;
        vector<ll> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++) dp[i]=(dp[i-1]+dp[i-2])%mod;
        
        ans=dp[n];
        
        return ans;
    }
};