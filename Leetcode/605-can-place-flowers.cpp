//605. Can Place Flowers
//Problem Link: https://leetcode.com/problems/can-place-flowers/description/

//Time complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        
        int count=1,plant=0;

        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0) count+=1;
            else
            {
                plant+=(count-1)/2;
                count=0;
            }
        }

        if(count!=0) plant+=count/2;

        return plant>=n;      
    }
};