//Count Odd Even
//Problem Link: https://practice.geeksforgeeks.org/problems/count-odd-even/1?page=1&difficulty[]=0&status[]=unsolved&category[]=Arrays&sortBy=submissions

//Time Complexity:
//Space Complexity:

class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    void countOddEven(int arr[], int sizeof_array)
    {
        
        long long odd=0,even=0;
        
        for(int i=0;i<sizeof_array;i++)
        {
            if(arr[i]%2==0) even+=1;
            else odd+=1;
        }
        
        cout<<odd<<" "<<even<<endl;
       
        
    }
};