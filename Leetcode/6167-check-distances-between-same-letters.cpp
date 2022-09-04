//6167. Check Distances Between Same Letters
//Problem Link: https://leetcode.com/contest/weekly-contest-309/problems/check-distances-between-same-letters/

//Time Complexity:
//Space Complexity: O(n)

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {

        map<char,vector<int>> mp;

        for(int i=0;i<s.size();i++)
        {
            mp[s[i]].push_back(i);
        }

        for(auto it:mp)
        {
            if(it.second[1]-it.second[0]-1!=distance[it.first-'a'])
            {
                return false;
            }
        }

        return true;

    }
};