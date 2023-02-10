//57. Balloon Everywhere
//Problem Link: https://practice.geeksforgeeks.org/problems/45fa306a9116332ece4cecdaedf50f140bd252d4/1

//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution{
public:
    int maxInstance(string s){
        vector<int> v(5);
        int n=s.size();
        int l=0,o=0;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='b') v[0]++;
            else if(s[i]=='a') v[1]++;
            else if(s[i]=='l') l++;
            else if(s[i]=='o') o++;
            else if(s[i]=='n') v[4]++;
        }
        
        v[2]=l/2;
        v[3]=o/2;
        
        sort(v.begin(),v.end());
        
        return v[0];
        
        
    }
};