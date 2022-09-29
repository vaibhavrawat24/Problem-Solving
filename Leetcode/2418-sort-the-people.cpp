//2418. Sort the People
//Problem Link: https://leetcode.com/problems/sort-the-people/

//Time Complexity:
//Space Complexity:

bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{
    return (a.second>b.second);
}
    

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        vector<pair<string,int>> v;
        
        for(int i=0;i<names.size();i++)
        {
            v.push_back({names[i],heights[i]});
        }
        
        sort(v.begin(),v.end(),sortbysec);
        
        vector<string> ans;
        
        for(auto it:v)
        {
            ans.push_back(it.first);
        }
        
        return ans;
        
    }
};