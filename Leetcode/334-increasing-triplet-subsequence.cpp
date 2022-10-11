//334. Increasing Triplet Subsequence
//Problem Link: https://leetcode.com/problems/increasing-triplet-subsequence/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX, last_good = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            smallest = min(nums[i], smallest);
            if(nums[i] > smallest) last_good = min(nums[i], last_good);
            if(nums[i] > last_good) return true;
        }
        return false;
    }
};