#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        int l1 = strlen(s);
        int l2 = strlen(p);
        bool dp[l1+1][l2+1];
        memset(dp,false,sizeof(dp));
        dp[0][0] = true;
        for(int i=1;i<l2&&p[i]=='*';i+=2)
        	dp[0][i+1] = true;
        
        for(int i=0;i<l1;i++)
        {
        	for(int j=0;j<l2;j++)
        	{
        		if(p[j] == '.')
        			dp[i+1][j+1] = dp[i][j];
        		else if(p[j] == '*'){
        			if(p[j-1]!=s[i] && p[j-1]!='.')
        				dp[i+1][j+1] = dp[i+1][j-1];
        			else
        				dp[i+1][j+1] = dp[i+1][j-1] || dp[i+1][j] || dp[i][j+1];			
				}else
					dp[i+1][j+1] = (dp[i][j] && s[i]==p[j]);
			}
		}
		return dp[l1][l2];
    }
};

int main()
{


	return 0;
}

