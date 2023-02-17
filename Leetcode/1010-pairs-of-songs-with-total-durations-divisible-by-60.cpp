//1010. Pairs of Songs With Total Durations Divisible by 60
//Problem Link: https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/description/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans=0;
        vector<int> mp(60);

        for(auto it:time)
        {
            it%=60;
            ans+=mp[(60-it)%60];
            mp[it]++;
        }

        return ans;
    }
};