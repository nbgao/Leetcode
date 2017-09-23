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
#define ll __int64
#define LL long long
#define Input int T; cin>>T;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define clear(a,x) memset(a,x,sizeof(a))
const int INF=0x3f3f3f3f;
const int MAX=1001;

using namespace std;

class Solution {
public:
    bool wordBreak(string s, unordered_set<string> &dict) {
        int l = s.length();
        vector<bool> dp(l+1, false);
        dp[0] = true;
        for(int i=0;i<l;i++)
        	for(int j=i;j<l && dp[i];j++)
        		if(dict.find(s.substr(i, j-i+1)) != dict.end())
        			dp[j+1] = true;
        return dp[l];
    }
};

int main()
{


	return 0;
}

