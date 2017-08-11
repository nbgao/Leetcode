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
    vector<int> getRow(int rowIndex) {
        vector<int> dp(rowIndex+1,1);
        for(int i=2;i<=rowIndex;i++)
        	for(int j=i-1;j>0;j--)
        		dp[j] = dp[j] + dp[j-1];
        return dp;        	
    }
};

int main()
{


	return 0;
}

