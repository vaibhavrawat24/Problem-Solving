//899. Orderly Queue
//Problem Link: https://leetcode.com/problems/orderly-queue/

//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1)
        {
            int n=s.size();
            string temp=s+s;
            string ans=s;
            for(int i=1;i<n;i++)
            {
                string str=temp.substr(i,n);
                if(str<ans) ans=str;
            }
            return ans;
        }
        else
        {        
            sort(s.begin(),s.end());
            return s;
        }
    }
};
