//1207. Unique Number of Occurrences
//Problem Link: https://leetcode.com/problems/unique-number-of-occurrences/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;        //declare a map to store occurences of each element
        set<int> st;                      // declare a set so that we can compare the occurences
        int n=arr.size();
        
        for(int i=0;i<n;i++) mp[arr[i]]+=1;    //increase the occurence of each element in map
        
        for(auto it:mp) st.insert(it.second);  //insert occurences in set
        
        if(mp.size()==st.size()) return true;  //if the size of map and set is equal that means all the occurences are unique
        else return false;
    }
};