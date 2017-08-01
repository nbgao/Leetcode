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

using namespace std;

class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > matrix(n,vector<int>(n));
        int count = 1;
		int row_start = 0,row_end = n-1,col_start = 0,col_end = n-1;
        
        while(count <= n*n)
        {
	 		for(int i=col_start;i<=col_end;i++)
	        	matrix[row_start][i] = count++;
	        row_start++;
	        
	        for(int i=row_start;i<=row_end;i++)
	        	matrix[i][col_end] = count++;
	        col_end--;
	        
	        for(int i=col_end;i>=col_start;i--)
	        	matrix[row_end][i] = count++;
	        row_end--;
	        
	        for(int i=row_end;i>=row_start;i--)
	        	matrix[i][col_start] = count++;
	        col_start++;       	
		}
        return matrix;
    }
};

int main()
{


	return 0;
}

