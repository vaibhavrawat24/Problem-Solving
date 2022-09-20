//771. Jewels and Stones
//Problem Link: https://leetcode.com/problems/jewels-and-stones/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(int i=0;i<jewels.size();i++)
        {
            for(int j=0;j<stones.size();j++)
            {
                if(jewels[i]==stones[j]) ans+=1;
            }
        }
        
        return ans;
        
    }
};