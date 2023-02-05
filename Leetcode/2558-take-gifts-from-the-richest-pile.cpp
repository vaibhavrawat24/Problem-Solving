//2558. Take Gifts From the Richest Pile
//Problem Link: https://leetcode.com/contest/weekly-contest-331/problems/take-gifts-from-the-richest-pile/

//Time Complexity: O(n log n)
//Space Complexity: O(n) 

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(),gifts.end());
        
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            int x2=sqrt(x);
            pq.push(x2);
        }
        
        long long ans=0;
        
        while(pq.size())
        {
            ans+=pq.top();
            pq.pop();
        }
        
        return ans;
    }
};