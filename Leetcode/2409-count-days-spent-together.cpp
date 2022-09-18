//2409. Count Days Spent Together
//Problem Link: https://leetcode.com/contest/biweekly-contest-87/problems/count-days-spent-together/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) 
    {
        vector<int> mn={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        string st=max(arriveAlice,arriveBob);
        string en=min(leaveAlice,leaveBob);
        
        if(st<=en)
        {
            int startm=stoi(st.substr(0,2));
            int startd=stoi(st.substr(3,2));
            int endm=stoi(en.substr(0,2));
            int endd=stoi(en.substr(3,2));
            
            if(endm==startm) 
            {
                return endd-startd+1;
            }
            
            int day=mn[startm]-startd;
            
            for(int i=startm+1;i<endm;i++)
            {
                day+=mn[i];
            }
            
            day+=endd+1;
            
            
            return day;
        }
        
        return 0;
        
    }
};