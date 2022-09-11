//6178. Divide Intervals Into Minimum Number of Groups
//Problem Link: https://leetcode.com/contest/weekly-contest-310/problems/divide-intervals-into-minimum-number-of-groups/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(), intervals.end());
        
        priority_queue<int, vector<int>, greater<int>> pq;
        int ans=1;
        
        for(int i=0;i<intervals.size();i++) 
        {
            int st=intervals[i][0];
            int end=intervals[i][1];

            if(!pq.empty() && pq.top()>st) ans+=1;
            else if(!pq.empty()) pq.pop();

            pq.push(end+1);
        }

        return ans;
    }
};