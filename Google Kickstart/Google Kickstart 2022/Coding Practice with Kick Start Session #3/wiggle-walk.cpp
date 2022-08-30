//Wiggle Walk (Coding Practice with Kick Start Session #3 - Kick Start 2022)

/*
Banny has just bought a new programmable robot. Eager to test his coding skills, he has placed the robot in a grid of squares with R rows (numbered 1 to R from north to south) and C columns (numbered 1 to C from west to east). The square in row r and column c is denoted (r,c).

Initially the robot starts in the square (SR, SC). Banny will give the robot N instructions. Each instruction is one of N, S, E, or W, instructing the robot to move one square north, south, east, or west respectively.

If the robot moves into a square that it has been in before, the robot will continue moving in the same direction until it reaches a square that it has not been in before. Banny will never give the robot an instruction that will cause it to move out of the grid.

Can you help Banny determine which square the robot will finish in, after following the N instructions?

Sample Input:                                 Sample Output:

3
5 3 6 2 3                                     Case #1: 3 2
EEWNS
4 3 3 1 1                                     Case #2: 3 3
SESE
11 5 8 3 4                                    Case #3: 3 7
NEESSWWNESE

*/

//Time Complexity:
//Space Complexity:

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int ins, n, m, x, y;
        cin>>ins>>n>>m>>x>>y;
        string s;
        cin>>s;
        x--;
        y--;
        
        vector<vector<bool>> vis(n ,vector<bool> (m,false));
        for(int i=0;i<ins;i++){
            vis[x][y] = true;
          
            if(s[i] == 'E'){
                while(vis[x][y+1] == true){
                    y++;
                }

                y++;
                
            }
            else if(s[i] == 'W'){
                while(vis[x][y-1] == true){
                    y--;
                }
                y--;
            }
            else if(s[i] == 'N'){
                while(vis[x-1][y] == true){
                    x--;
                }
                
                 x--;
            }
            else{
               while(vis[x+1][y] == true){
                    x++;
               }
                    x++;
            }
        }

        x++;
        y++;
        cout<<"Case #"<<j<<": "<<x<<" "<<y<<endl;


    }
}