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
    int minimumTotal(vector<vector<int> > &triangle) {
        int n = triangle.size();
		vector<int> dp(triangle.back());
		for(int i=n-2;i>=0;i--)
			for(int j=0;j<=i;j++)
				dp[j] = triangle[i][j] + min(dp[j],dp[j+1]);
		return dp[0];
    }
};

int main()
{


	return 0;
}

