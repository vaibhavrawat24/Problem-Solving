// 1366. Rank teams by votes
// Problem Link: https://leetcode.com/problems/rank-teams-by-votes/description/

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution
{
public:
    string rankTeams(vector<string> &votes)
    {
        map<char, vector<int>> rankings;

        for (char c : votes[0])
            rankings[c] = vector<int>(26, 0);

        for (string vote : votes)
        {
            for (int i = 0; i < vote.size(); i++)
                rankings[vote[i]][i]++;
        }

        auto customSort = [&](char a, char b)
        {
            for (int i = 0; i < 26; i++)
            {
                if (rankings[a][i] > rankings[b][i])
                    return true;
                if (rankings[a][i] < rankings[b][i])
                    return false;
            }
            return a < b;
        };

        sort(votes[0].begin(), votes[0].end(), customSort);

        return votes[0];
    }
};