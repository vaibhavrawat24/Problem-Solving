//442. Find All Duplicates in an Array
//Problem Link:

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto i:mp)
        {
            if(i.second>=2)
            {
                ans.push_back(i.first);
            }
        }
        
        return ans;
        
    }
};