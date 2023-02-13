//1523. Count Odd Numbers in an Interval Range
//Problem Link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    int countOdds(int low, int high) {

        int ans=0;
        for(int i=low;i<=high;i++)
        {
            if(i%2!=0) ans++;
        }

        return ans;
    }
};