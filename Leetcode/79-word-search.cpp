//79. Word Search
//Problem Link: https://leetcode.com/problems/word-search/

//Time Complexity: O(m*n*4^k)
//Space Complexity: O(k)

class Solution {
public:
    bool search(vector<vector<char>>& board, string word,int i,int j,vector<vector<int>>& vis,int row,int col,int wordIndex)
    {
        if(board[i][j]==word[wordIndex])
        {
            vis[i][j]=true;       //mark the word as visited
            
            if(wordIndex==word.size()-1) return true;     //if the wordIndex is the last element of the word then the word is                                                               found
            
            if(i-1>=0 && !vis[i-1][j])     //check the upper index for the word 
            {
                if(search(board,word,i-1,j,vis,row,col,wordIndex+1))    //if the word is found return true
                    return true;
            }
            if(i+1<row && !vis[i+1][j])    //check the lower element for the word 
            {
                if(search(board,word,i+1,j,vis,row,col,wordIndex+1))    //if the word is found return true
                    return true;
            }
            if(j-1>=0 && !vis[i][j-1])     //check the left element for the word 
            {
                if(search(board,word,i,j-1,vis,row,col,wordIndex+1))    //if the word is found return true
                    return true;
            }
            if(j+1<col && !vis[i][j+1])    //check the right element for the word 
            {
                if(search(board,word,i,j+1,vis,row,col,wordIndex+1))    //if the word is found return true
                    return true;
            }
            
            vis[i][j]=false; //mark cell as unvisited after we check all the adjacent possibilities because we might visit this                               cell again when we start traversing the matrix from a different source cell.
            return false;
        }
        
        return false;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();            //total rows in the board
        int col=board[0].size();         //total columns in the board
        
        vector<vector<int>> vis(row+1,vector<int>(col+1,0));   //make a vis matrix to keep a track of already visited words
        
        if(row==0) return false;         //if the size of the board is 0 then obv the word doesnt exist 
        if(word.size()==0) return true;  //if the size of the word is 0 then obv the word exist 
        if(row==1 && col<word.size()) return false;  //if there is only 1 row & cols are less then the word size then word doesnt                                                        exists
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)        //traverse through all the cells to check for the word 
            {
                if(search(board,word,i,j,vis,row,col,0)) return true;    //calling dfs function to check for the word
            }
        }
        
        return false;
    }
};