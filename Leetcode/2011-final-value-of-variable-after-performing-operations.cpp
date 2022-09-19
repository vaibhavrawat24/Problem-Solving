//2011. Final Value of Variable After Performing Operations
//Problem Link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="--X" || operations[i]=="X--") ans-=1;
            else ans+=1;
        }
        
        return ans;
        
    }
};