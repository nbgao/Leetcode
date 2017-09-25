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
    int minCut(string s) {
        int l = s.length();
		int dp[l+1];
		bool a[l][l];
		memset(a, false, sizeof(a));
		dp[l] = -1;
		for(int i=l-1;i>=0;i--)
		{
			dp[i] = INT_MAX;
			for(int j=i;j<l;j++)
			{
				if(s[i]==s[j] && (j-i<2 || a[i+1][j-1]))
				{
					a[i][j] = true;
					dp[i] = min(dp[i], dp[j+1]+1);
				}
			}
		}
		return dp[0];
    }
};

int main()
{


	return 0;
}

