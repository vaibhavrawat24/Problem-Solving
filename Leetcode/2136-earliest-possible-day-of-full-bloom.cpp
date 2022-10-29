//2136. Earliest Possible Day of Full Bloom
//Problem Link:

//Time Complexity:
//Space complexity:

class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=plantTime.size();
        priority_queue<pair<int, int>> pq;
        
        for(int i=0;i<n;i++)
        {
           pq.push(make_pair(growTime[i], plantTime[i]));
        }
        
        int plant=-1,maxi=0;
        
        while(!pq.empty())
        {
            int a=pq.top().first;
            int b=pq.top().second;
            plant += b;
            int g=plant+a;
            maxi=max(g,maxi);
            pq.pop();
        }
        
        return maxi+1;
    }
};