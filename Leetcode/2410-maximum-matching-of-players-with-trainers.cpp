//2410. Maximum Matching of Players With Trainers
//Problem Link: https://leetcode.com/contest/biweekly-contest-87/problems/maximum-matching-of-players-with-trainers/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(),trainers.end());
        int i=0,j=0;
        int ans=0;
        
        while(j<trainers.size() && i<players.size() )
        {
            if(players[i]<=trainers[j])
            {
                ans+=1;
                i+=1;
                j+=1;
            }
            else
            {
                j+=1;
            }
        }
        
        return ans;        
    }
};