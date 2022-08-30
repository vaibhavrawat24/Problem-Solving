//1108. Defanging an IP Address
//Problem Link: https://leetcode.com/problems/defanging-an-ip-address/

//Solution 1:

//Time Complexity: O(m*n)
//Space Complexity:

class Solution {
public:
    string defangIPaddr(string address) {
        
        return regex_replace(address, regex("[.]"), "[.]");
    }
};

//Solution 2:

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
            {
                ans+="[.]";
            }
            else
            {
                ans.push_back(address[i]);
            }
        }
        return ans;
    }
};