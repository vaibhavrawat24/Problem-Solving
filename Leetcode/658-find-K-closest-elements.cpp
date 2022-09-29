//658. Find K Closest Elements
//Problem Link: https://leetcode.com/problems/find-k-closest-elements/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        vector<pair<int,int>> res;
        
        for(int i=0;i<arr.size();i++)
        {
            int a=abs(arr[i]-x);
            res.push_back({a,arr[i]});
        }
        
        sort(res.begin(),res.end());
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(res[i].second);
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
    }
};