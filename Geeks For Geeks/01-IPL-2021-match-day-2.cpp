//IPL 2021 - Match Day 2
//Problem Link: https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1

//Time Complexity:
//Space Complexity:

class Solution {
  public:
   vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
        priority_queue<pair<int, int>> pq;
        
        for(int i = 0; i < k; i++)
        {
            pq.push({nums[i], i});
        }
        
        vector<int> ans;
        
        ans.push_back(pq.top().first);
        
        for(int i = k ; i < nums.size(); i++)
        {
            pq.push({nums[i], i});
            
            while(pq.top().second <= (i - k))
            {
                pq.pop();
            }
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};