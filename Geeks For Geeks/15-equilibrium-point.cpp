//Equilibrium Point
//Problem Link: https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1?page=1&category[]=Arrays&curated[]=1&sortBy=accuracy

//Time Complexity:
//Space Complexity:

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
    
        long sum =0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        
        long left_sum=0;
        
        for(int j=0;j<n;j++)
        {
            long right_sum =sum-a[j];
            if(left_sum == right_sum)
            {
            return j+1;
            }
            left_sum=left_sum+a[j];
            sum=sum-a[j];
        }
        
        return -1;
    }

};