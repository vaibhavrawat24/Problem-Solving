//2432. The Employee That Worked on the Longest Task
//Problem Link: https://leetcode.com/contest/weekly-contest-314/problems/the-employee-that-worked-on-the-longest-task/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maxi=logs[0][1]-0;
        int ans=logs[0][0];
        
        for(int i=1;i<logs.size();i++)
        {
            if((logs[i][1]-(logs[i-1][1]))>maxi)
            {
                maxi=logs[i][1]-logs[i-1][1];
                ans=logs[i][0];
            }
            else if((logs[i][1]-(logs[i-1][1]))==maxi)
            {
                if(logs[i][0]<ans) ans=logs[i][0];
            }
        }
                
        return ans;
        
    }
};