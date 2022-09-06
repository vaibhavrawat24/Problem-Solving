//169. Majority Element
//Problem Link: https://leetcode.com/problems/majority-element/

//Approach 1:

//Time Complexity: O(n log n)
//Space Complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    
    }
};

//Approach 2:

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            
            mp[nums[i]]++;
            if(mp[nums[i]]>nums.size()/2)
                return nums[i];
        }
   // sort(m.begin(),m.end());
        return -1;
    
        
        
    }
};