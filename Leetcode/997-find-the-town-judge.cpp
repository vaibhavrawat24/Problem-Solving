//997. Find the Town Judge
//Problem Link: https://leetcode.com/problems/find-the-town-judge/description/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
       
        vector<int> in(N+1), out(N+1);
        
        for(auto edge : trust)
        {
            int from = edge[0]-1, to = edge[1]-1;
            out[from]++;
            in[to]++;
        }
        
        for(int i = 0; i < N; i++)
        {
            if(in[i] == N-1 && out[i] == 0)
            {
                return i+1;
            }
        }
        
        return -1;
    }
};