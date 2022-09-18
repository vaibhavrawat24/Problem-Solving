//2413. Smallest Even Multiple
//Problem Link: https://leetcode.com/contest/weekly-contest-311/problems/smallest-even-multiple/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0) return n;
        else return n*2;
        
    }
};