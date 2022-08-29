//1526. Minimum Number of Increments on Subarrays to Form a Target Array
//Problem Link: https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        
         int initial = target[0];
            for (int i = 1; i < target.size(); i++)
            {
                if (target[i] > target[i - 1])
                {
                    initial += target[i] - target[i - 1];
                }
            }
            return initial;
        
    }
};