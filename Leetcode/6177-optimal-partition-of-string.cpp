//6177. Optimal Partition of String
//Problem Link: https://leetcode.com/contest/weekly-contest-310/problems/optimal-partition-of-string/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int partitionString(string s) {
        if(s.size()==0) return 0;
        
        map<int,int> mp;
        int ans=1;
        
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]-'a']==1)
            {
                ans+=1;
                mp.clear();
                mp[s[i]-'a']++;
            }
            else
            {
                mp[s[i]-'a']++;
            }
        }
        
        return ans;
        
    }
};