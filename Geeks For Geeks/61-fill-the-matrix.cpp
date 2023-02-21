//61. Fill the Matrix
//Problem Link: https://practice.geeksforgeeks.org/problems/2145720aebf8ea0b07f76b17217b3353a0fbea7f/1

//Time complexity: O(N*M)
//Space Complexity: O(N*M)

class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        vector<vector<int>> grid(N+1,vector<int>(M+1,0));
        
        grid[x][y]=1;
        int ans=0;
        
        queue<pair<int,int>> q;
        
        q.push({x,y});
        
        while(!q.empty())
        {
            
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                int x=q.front().first;
                int y=q.front().second;
                
                q.pop();
                
                if(x>1 && grid[x-1][y]==0)
                {
                    q.push({x-1,y});
                    grid[x-1][y]=1;
                }
                if(y>1 && grid[x][y-1]==0)
                {
                    q.push({x,y-1});
                    grid[x][y-1]=1;
                }
                if(x<N && grid[x+1][y]==0)
                {
                    q.push({x+1,y});
                    grid[x+1][y]=1;
                }
                if(y<M && grid[x][y+1]==0)
                {
                    q.push({x,y+1});
                    grid[x][y+1]=1;
                }
            }
            
            if(!q.empty()) ans++;
        }
        
        return ans;
    }
};