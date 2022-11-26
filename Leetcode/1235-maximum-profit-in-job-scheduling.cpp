//1235. Maximum Profit in Job Scheduling
//Problem Link: https://leetcode.com/problems/maximum-profit-in-job-scheduling/

//Time Complexity: O(N log N)
//Space Complexity: O(N)

class Solution {
public:
    static bool comp(const pair<int,int>& p1, const pair<int,int>& p2)
    {
         return abs(p1.first)<abs(p2.first) || (abs(p1.first)==abs(p2.first) && p1.first<0);
        //if startTime is equal to endTime, endTime is marked first
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<pair<int,int>> timest;
        
        for(int i=0;i<startTime.size();i++) timest.push_back({startTime[i],i}); //startTime as positive
        for(int i=0;i<endTime.size();i++) timest.push_back({-endTime[i],i});    //endTime as negative
        
        sort(timest.begin(),timest.end(),comp); //sorting the timestamps
        
        int maxprev=0,ans=0;
        for(auto it:timest)
        {
            if(it.first>0) ans=max(ans,profit[it.second]+=maxprev); //storing the max profit for every job
            else maxprev=max(maxprev,profit[it.second]);
        }
        
        return ans;
    }
};