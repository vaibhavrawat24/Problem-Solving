//2423. Remove Letter To Equalize Frequency
//Problem Link:

//Time Complexity:
//Space Complexity:

class Solution {
public:
    bool check(map<char,int> yo)
    {
        set<int> ye;
        
        for(auto it: yo)
        {
            if(it.second>0) ye.insert(it.second);
        }
        
        if(ye.size()==1) return true;
        
        return false;
    }
    
    bool equalFrequency(string word)
    {
        map<char,int> yo;
       
        for(auto it:word) yo[it]++;
        
        for(auto it: yo)
        {
            yo[it.first]--;
            
            if(check(yo)==true) 
            {
                return true;
            }
            
            yo[it.first]++;
        }
        
        return false;
    }
};