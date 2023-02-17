//1200. Minimum Absolute Difference
//Problem Link: https://leetcode.com/problems/minimum-absolute-difference/description/

//Time complexity: O(n log n)
//Space complexity: O(k), where k is the number of pairs

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;

        sort(arr.begin(),arr.end());
        ans.push_back({arr[0],arr[1]});
        int diff=arr[1]-arr[0];

        for(int i=2;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]<diff)
            {
                ans.clear();
                ans.push_back({arr[i-1],arr[i]});
                diff=arr[i]-arr[i-1];
            }
            else if(arr[i]-arr[i-1]==diff)
            {
                ans.push_back({arr[i-1],arr[i]});
            }
        }

        return ans;
    }
};