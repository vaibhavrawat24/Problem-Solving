//1342. Number of Steps to Reduce a Number to Zero
//Problem Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

//Time Complexity:
//Space complexity:

class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        while(num!=0)
        {
            if(num%2==0) num=num/2;
            else num=num-1;
            
            count+=1;
        }
        
        return count;
    }
};