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
    bool isMatch(const char *s, const char *p) {
        int m = strlen(s);
        int n = strlen(p);
        if((s==NULL && p==NULL) || (m==0 && n==0))
        	return true;
        if(m!=0 && n==0)
        	return false;
        bool dp[m+1][n+1];
        memset(dp,false,sizeof(dp));
        dp[0][0] = true;
        for(int i=1;i<=n;i++)
        {
        	if(p[i-1] == '*')
        		dp[0][i] = dp[0][i-1];
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(s[i-1] == p[j-1] || p[j-1]=='?')
					dp[i][j] = dp[i-1][j-1];
				if(p[j-1] == '*')
					dp[i][j] = dp[i][j-1] || dp[i-1][j];
			}
		}
		return dp[m][n];
    }
};

int main()
{


	return 0;
}

