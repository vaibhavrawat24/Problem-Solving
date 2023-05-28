//65. Maximum Identical Bowls
//Problem Link: https://practice.geeksforgeeks.org/problems/5bfe93cc7f5a214bc6342709c78bc3dceba0f1c1/1

//Time Complexity: O(n)
//Space Complexity: O(1)

public:
    int getMaximum(int N, vector<int> &arr) {
        long long sum=accumulate(arr.begin(),arr.end(),0LL);
        long long temp=N;
        
        for(int i=0;i<N;i++)
        {
            if(sum%temp==0) return temp;
            else temp--;
        }
        
        return -1;       
    }
