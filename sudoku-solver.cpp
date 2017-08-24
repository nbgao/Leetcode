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

using namespace std;

class Solution {
public:
	void solveSudoku(vector<vector<char> > &board) {
		int n=board.size();
		if(board.empty() || n == 0)
			return;
		solve(board);
	}
	
    bool solve(vector<vector<char> > &board) {
        int n = board.size();
        for(int i=0;i<n;i++)
        	for(int j=0;j<n;j++)
        		if(board[i][j] == '.')
        		{
        			for(char c='1';c<='9';c++)
        				if(isValid(board,i,j,c))
        				{
        					board[i][j] = c;
        					if(solve(board))
        						return true;
        					else
        						board[i][j] = '.';
						}
					return false;
				}
		return true;
    }
    
    bool isValid(vector<vector<char> > board,int row,int col,char num)
    {
    	int n = board.size();
    	for(int i=0;i<n;i++)
    	{
    		if(board[i][col] == num || board[row][i] == num)
    			return false;
    		if(board[3*(row/3)+i/3][3*(col/3)+i%3] == num)
    			return false;
		}
		return true; 
	}
};

int main()
{


	return 0;
}

