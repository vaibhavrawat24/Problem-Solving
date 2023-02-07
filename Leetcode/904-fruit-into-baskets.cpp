//904. Fruit Into Baskets
//Problem Link: https://leetcode.com/problems/fruit-into-baskets/description/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int ans=0;
        unordered_map<int,int> mp;

        for(int l=0,r=0;r<fruits.size();++r)
        {
            ++mp[fruits[r]];
            while(mp.size()>2)
            {
                if(--mp[fruits[l]]==0) mp.erase(fruits[l]);
                l+=1;
            }

            ans=max(ans,r-l+1);
        }

        return ans;
    }
};