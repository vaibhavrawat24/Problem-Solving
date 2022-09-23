//1680. Concatenation of Consecutive Binary Numbers
//Problem Link: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    // the idea is to use bit manipulation to set the current number based on the previous number
    // for example, 
    // n = 1, ans = 0b1
    // n = 2 (10), we need to shift 2 bits of the previous ans to the left and add `n`
    // i.e. 1 -> 100 (shift 2 bits to the left) -> 110 (set `10`). ans = 0b110
    // n = 3 (11), we need to shift 2 bits of the previous ans to the left and add `n` 
    // i.e 110 -> 11000 (shift 2 bits to the left) -> 11011 (set `11`). ans = 0b11011
    // n = 4 (100), we need to shift 3 bits of the previous ans to the left and add `n`
    // i.e. 11011 -> 11011000 (shift 3 bits to the left) -> 11011100 (set `100). ans = 0b11011100
    // so now we can see a pattern here
    // we need to shift `l` bits of the previous ans to the left and add the current `i` 
    // how to know `l`? it is not difficult to see `x` only increases when we meet power of 2
    int concatenatedBinary(int n) {
        // `l` is the bit length to be shifted
        int M = 1e9 + 7, l = 0;
        // use long here as it potentially could overflow for int
        long ans = 0;
        for (int i = 1; i <= n; i++) {
            // i & (i - 1) means removing the rightmost set bit
            // e.g. 100100 -> 100000
            //      000001 -> 000000
            //      000000 -> 000000
            // after removal, if it is 0, then it means it is power of 2
            // as all power of 2 only contains 1 set bit
            // if it is power of 2, we increase the bit length `l`
            if ((i & (i - 1)) == 0) l += 1;
            // (ans << l) means shifting the orginal answer `l` bits to th left
            // (x | i) means  using OR operation to set the bit
            // e.g. 0001 << 3 = 0001000
            // e.g. 0001000 | 0001111 = 0001111
            ans = ((ans << l) | i) % M;
        }
        return ans;
    }
};