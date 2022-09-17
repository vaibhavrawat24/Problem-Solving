//1720. Decode XORed Array
//Problem Link: https://leetcode.com/problems/decode-xored-array/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans={first};
        for(auto it:encoded)
        {
            ans.push_back(ans.back()^it);
        }
        return ans;
        
    }
};