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
    bool isInterleave(string s1, string s2, string s3) {
        int l1 = s1.length();
        int l2 = s2.length();
        int l3 = s3.length();
        
        if(l1+l2 != l3)
        	return false;
        
        vector<vector<bool> > dp(l1+1,vector<bool>(l2+1,false));
        dp[0][0] = true;
        for(int i=1;i<=l1;i++)
        	dp[i][0] = dp[i-1][0] && s1[i-1]==s3[i-1];
        for(int j=1;j<=l2;j++)
        	dp[0][j] = dp[0][j-1] && s2[j-1]==s3[j-1];
        for(int i=1;i<=l1;i++)
        	for(int j=1;j<=l2;j++)
        		dp[i][j] = (dp[i-1][j] && s1[i-1]==s3[i+j-1] ||
        					dp[i][j-1] && s2[j-1]==s3[i+j-1]);
        return dp[l1][l2];
    }
};

int main()
{


	return 0;
}

