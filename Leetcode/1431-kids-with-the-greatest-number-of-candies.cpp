//1431. Kids With the Greatest Number of Candies
//Problem Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

//Time Complexity:
//space Complexity:

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxi = INT_MIN;
        for (auto i: candies){
            maxi = max(maxi,i);
        }
        for (auto i:candies){
            ans.push_back(i+extraCandies >= maxi);
        }
        return ans;
    }
};