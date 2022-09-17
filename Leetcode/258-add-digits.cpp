//258. Add Digits
//Problem Link:

//Approach 1: Digit Root

//Time Complexity: O(1)
//Space Complexity: O(1)

/*
The logic behind this approach , I think is related to the divisibility test of 9.
If you don't know then , "To check if a number is divisible by 9, add the digits of the number and check if the sum is divisible by 9 or not. If yes , is the case , then the number is divisible by 9 , otherwise it's not ."
Now if you notice if a number is divisible by 9(and 3) , then if we follow the procedure as mention in the question (sum of digits of every previous num) , we would always find the new_num(the sum of the digits ) to be divisible by 9(and 3).

{
sum=addDigits(num);
if num%9==0 , then sum%9==0 too.
Now, num=sum;
Since sum%9=0 , so ,
sum=addDigits(sum) %9 =0
}

But , if the number is not divisible by 9 , if you continue to evaluate the sum of digits , the sum generated will be a number which when divided by 9 will generate the same remainder as it would have if we wold have divided num. So , if we see , then the remainder of num , doesn't change with sum of digits.
*/

class Solution {
public:
    int addDigits(int num) {
        if(num==0) return 0;
        else if(num%9==0) return 9;
        else return num%9;
        
    }
};