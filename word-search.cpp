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

using namespace std;

class Solution {
public:
    bool exist(vector<vector<char> > &board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;i++)
        	for(int j=0;j<n;j++)
        		if(DST(board,i,j,0,word))
        			return true;
        return false;
    }
    bool DST(vector<vector<char> > &board,int i,int j,int s,string word)
    {
    	int m = board.size();
    	int n = board[0].size();
    	if(word[s] == board[i][j])
    	{
    		if(s == word.size()-1)
    			return true;
    		char c = board[i][j];
    		board[i][j] = '*';
    		bool flag = (i+1<m && DST(board,i+1,j,s+1,word)) ||
    					(i>0 && DST(board,i-1,j,s+1,word)) ||
    					(j+1<n && DST(board,i,j+1,s+1,word)) ||
    					(j>0 && DST(board,i,j-1,s+1,word));
    		board[i][j] = c;
    		return flag;
		}
		return false;
	}
};

int main()
{


	return 0;
}

