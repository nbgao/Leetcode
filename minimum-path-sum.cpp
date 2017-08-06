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
    int minPathSum(vector<vector<int> > &grid) {
  		int m = grid.size();
		int n = grid[0].size();
		
		int dp[m][n];
		dp[0][0] = grid[0][0];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==0 && j!=0)
					dp[i][j] = dp[i][j-1] + grid[i][j];
				else if(j==0 && i!=0)
					dp[i][j] = dp[i-1][j] + grid[i][j];
				else if(i*j != 0)
					dp[i][j] = min(dp[i-1][j]+grid[i][j] , dp[i][j-1]+grid[i][j]);
			}
		}
		return dp[m-1][n-1];
    }
};

int main()
{


	return 0;
}

