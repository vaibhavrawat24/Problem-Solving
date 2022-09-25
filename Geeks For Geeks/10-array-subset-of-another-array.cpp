//Array Subset of another array
//Problem Link: https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=1&category[]=Arrays&curated[]=1&sortBy=accuracy

//Time Complexity:
//Space Complexity:

string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int> mp;
    
    for(int i = 0; i< n; i++) mp[a1[i]]++;
    
    for(int i =0; i<m; i++)
    {
        if(mp.count(a2[i]) && mp[a2[i]] != 0) mp[a2[i]]--;
        else if( mp[a2[i]] == 0) return "No";
    }
    
    return "Yes";
    
}