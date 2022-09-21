//2344. Minimum Deletions to Make Array Divisible
//Problem Link: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int ans=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        int op=numsDivide[0];
        for(int i=1;i<numsDivide.size();i++)
        {
            op=__gcd(op,numsDivide[i]);
        }
        
        for(auto i : nums)
        {
            pq.push(i);
        }
        
        while(!pq.empty())
        {
            int temp=pq.top();
            pq.pop();
            if(op%temp==0) return ans;
            else if(temp>op) return -1;
            
            ans+=1;
        }
        
        return -1;
        
    }
};