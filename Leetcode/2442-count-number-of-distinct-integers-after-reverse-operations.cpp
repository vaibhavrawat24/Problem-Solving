//2442. Count Number of Distinct Integers After Reverse Operations
//Problem Link: https://leetcode.com/contest/weekly-contest-315/problems/count-number-of-distinct-integers-after-reverse-operations/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> hehe;
        set<int> hoho;
        int ans=0;
        
        for(auto i:nums) hehe.push_back(i);
        
        for(auto i:nums)
        {
            int temp=i,sum=0;
            
            while(temp>0)
            {
                int x=temp%10;
                sum=sum*10+x;
                temp=temp/10;
            }
            
            hehe.push_back(sum);
        }
        
        for(auto i:hehe) 
        {
            hoho.insert(i);
        }
        
        return hoho.size();
        
    }
};