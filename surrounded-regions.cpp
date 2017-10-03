#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>
#include <stack>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    void solve(vector<vector<char>> &board) {
        if(board.empty())
        	return;
        int rows = board.size();
        int cols = board[0].size();
        
        if(rows==0 || cols==0)
        	return;
        
        for(int j=0;j<cols;j++)
        {
        	DFS(board, 0, j);
        	DFS(board, rows-1, j);
		}
		
		for(int i=0;i<rows;i++)
		{
			DFS(board, i, 0);
			DFS(board, i, cols-1);
		}
		
		for(int i=0;i<rows;i++)
			for(int j=0;j<cols;j++)
				if(board[i][j] == 'O')
					board[i][j] = 'X';
		
		for(int i=0;i<rows;i++)
			for(int j=0;j<cols;j++)
				if(board[i][j] == '*')
					board[i][j] = 'O';
    }
    void DFS(vector<vector<char> > &board, int r, int c)
    {
    	if(board[r][c] == 'O')
    	{
    		board[r][c] = '*';
	    	int rows = board.size();
	    	int cols = board[0].size();
	    	
	    	if(r > 1)
	    		DFS(board, r-1, c);
	    	if(r < rows-2)
	    		DFS(board, r+1, c);
	    	if(c > 1)
	    		DFS(board, r, c-1);
	    	if(c < cols-2)
	    		DFS(board, r, c+1);    		
		}
	}
};

int main()
{


	return 0;
}

