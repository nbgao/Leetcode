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
    int numDecodings(string s) {
        int l = s.length();
        if(l==0 || s[0]=='0')
        	return 0;
        vector<int> dp(l+1,0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=l;i++)
        {
        	if(s[i-1]>='1' && s[i-1]<='9')
        		dp[i] += dp[i-1];
        	if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]>='0' && s[i-1]<='6'))
        		dp[i] += dp[i-2];
		}
    	return dp[l];
	}
};

int main()
{


	return 0;
}

