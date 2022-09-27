//Inverse Permutation
//Problem Link: https://practice.geeksforgeeks.org/problems/inverse-permutation0344/1?page=1&category[]=Arrays&sortBy=accuracy

//Time Complexity:
//Space Complexity:

vector<int> inversePermutation(int arr[], int size) {
    vector<int> ans(size);
    
    for(int i=0;i<size;i++)
    {
        ans[arr[i]-1]=i+1;
    }
    
    return ans;
}