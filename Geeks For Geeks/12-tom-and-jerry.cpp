//Tom and Jerry
//Problem Link: https://practice.geeksforgeeks.org/problems/tom-and-jerry1325/1

//Time Complexity: O(1)
//Space Complexity: O(1)

class Solution {
  public:
    int numsGame(int N) {
        return N%2==0?1:0;
    }
};