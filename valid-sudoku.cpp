#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {

        int rows[9][9]={0},cols[9][9]={0},cube[9][9]={0};
        
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				int num = board[i][j];
				
				if(num != '.')
				{
					if(rows[i][num-'1'] == 1)	//判断当前行 
						return false;
					else
						rows[i][num-'1']++;
					
					if(cols[j][num-'1'] == 1)	//判断当前列 
						return false;
					else
						cols[j][num-'1']++;
					
					if(cube[3*(i/3)+j/3][num-'1'] == 1)		//判断当前块 
						return false;
					else
						cube[3*(i/3)+j/3][num-'1']++;					
				}
			}
		}
        return true;
    }
};

int main()
{


	return 0;
}

