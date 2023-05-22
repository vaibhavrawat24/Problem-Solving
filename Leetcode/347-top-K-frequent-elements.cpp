//347. Top K Frequent Elements
//Problem Link: https://leetcode.com/problems/top-k-frequent-elements/description/

//Time Complexity:O(n + m log m + k).
//Space Complexity: O(n)

class Solution {
public:

    bool cmp(pair<int, int>& a,pair<int, int>& b)
    {
        return a.second < b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        vector<pair<int,int>> vec;

        for(auto& it : mp) vec.push_back(it);

        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;});

        for(int i=0;i<k;i++)
        {
            ans.push_back(vec[i].first);
        }

        return ans;

    }
};