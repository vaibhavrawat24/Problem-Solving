//The Bit Game
//Problem Link: https://practice.geeksforgeeks.org/problems/the-bit-game2313/1

//Time Complexity:
//Space Complexity:

class Solution{   
public:
    int swapBitGame(long long N){
        long long int c=0, d=0;
        while(N)
        {
            if(N%2 && d>0)
                c^=d;
            if(N%2==0)
                d++;
            N/=2;
        }
        if(c)
            return 1;
        else
            return 2;
    }
};