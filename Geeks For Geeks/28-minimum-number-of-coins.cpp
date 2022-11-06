//Minimum number of Coins
//Problem Link: https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution{
public:
    vector<int> minPartition(int n)
    {
        vector<int> ans;
        
        while(n!=0)
        {
            if(n>=2000)
            {
                ans.push_back(2000);
                n-=2000;
            }
            else if(n>=500 && n<2000)
            {
                ans.push_back(500);
                n-=500;
            }
            else if(n>=200 && n<500)
            {
                ans.push_back(200);
                n-=200;
            }
            else if(n>=100 && n<200)
            {
                ans.push_back(100);
                n-=100;
            }
            else if(n>=50 && n<100)
            {
                ans.push_back(50);
                n-=50;
            }
            else if(n>=20 && n<50)
            {
                ans.push_back(20);
                n-=20;
            }
            else if(n>=10 && n<20)
            {
                ans.push_back(10);
                n-=10;
            }
            else if(n>=5 && n<10)
            {
                ans.push_back(5);
                n-=5;
            }
            else if(n>=2 && n<5)
            {
                ans.push_back(2);
                n-=2;
            }
            else
            {
                ans.push_back(1);
                n-=1;
            }
        }
        
        return ans;
    }
};