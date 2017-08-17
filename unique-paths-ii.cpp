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
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if(n==0 || m==0)
        	return 0;
        	
        vector<int> dp(m,0);
        dp[0] = 1;
        for(int i=0;i<n;i++)
        	for(int j=0;j<m;j++)
        	{
        		if(obstacleGrid[i][j] == 1)
        			dp[j] = 0;
        		else if(j != 0)
        			dp[j] += dp[j-1];
			}
		return dp[m-1];
    }
};

int main()
{


	return 0;
}

