//1046. Last Stone Weight
//Problem Link: https://leetcode.com/problems/last-stone-weight/

//Time Complexity:
//Space Complexity:

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        if(stones.size()==1) return stones[0];
        
        priority_queue<int> pq;
        
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        
       while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            
            if(x==y) continue;
            else pq.push(abs(x-y));
        }
        
        if(!pq.empty()) return pq.top();
        else return 0;
        
    }
};