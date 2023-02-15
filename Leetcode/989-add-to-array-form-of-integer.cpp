//989. Add to Array-Form of Integer
//Problem Link: https://leetcode.com/problems/add-to-array-form-of-integer/description/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i=num.size()-1;
        int carry=k;

        vector<int> res;

        while(i>=0 || carry>0)
        {
            if(i>=0)
            {
                carry+=num[i];
            }

            int rem=carry%10;
            res.push_back(rem);
            carry/=10;
            i--;
        }

        reverse(res.begin(),res.end());

        return res;
    }
};