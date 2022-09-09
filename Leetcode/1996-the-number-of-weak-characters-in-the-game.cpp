//1996. The Number of Weak Characters in the Game
//Problem Link: https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),
             [](const auto& a, const auto& b){
                 return a[0]==b[0] ? a[1]>b[1] : a[0]<b[0];
             });
        
        int ans=0,maxi=0;
        
        for (int i=properties.size()-1;i>=0;i--) 
        {
            if (properties[i][1]<maxi) 
            {
                ans++;
            }
            maxi=max(maxi,properties[i][1]);
        }
        return ans;
        
    }
};