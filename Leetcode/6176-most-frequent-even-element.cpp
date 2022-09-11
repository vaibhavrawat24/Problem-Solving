//6176. Most Frequent Even Element
//Problem Link: https://leetcode.com/contest/weekly-contest-310/problems/most-frequent-even-element/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        int temp=-1;
        int ans=INT_MIN;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                mp[nums[i]]++;
            }
        }
        for(auto i:mp)
        {
            if(ans<i.second)
            {
                ans=i.second;
                temp=i.first;
            }
        }
        return temp;
    }
};
