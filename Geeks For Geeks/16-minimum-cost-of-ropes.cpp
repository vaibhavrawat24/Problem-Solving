//Minimum Cost of ropes
//Problem Link: https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

//Time Complexity:
//Space Complexity:

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        long long ans=0;
        vector<long long> a;
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        
        for(int i=0;i<n;i++) pq.push(arr[i]);
        
        while(pq.size()>1)
        {
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();
            
            a.push_back(x+y);
            pq.push(x+y);
        }
        
        for(auto it:a)
        {
            ans+=it;
        }
        
        return ans;
    }
    
};
