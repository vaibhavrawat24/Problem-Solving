//1323. Maximum 69 Number
//Problem Link: https://leetcode.com/problems/maximum-69-number/

//Time complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    int maximum69Number (int num) {
        string number=to_string(num);
        int n=number.size();
        
        for(int i=0;i<n;i++)
        {
            if(number[i]=='6') 
            {
                number[i]='9';
                break;
            }
        }
        
        return stoi(number);
        
    }
};