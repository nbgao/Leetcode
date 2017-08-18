#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        int n = height.size();
        if(n == 0)
        	return 0;
        vector<int> dp = height;
        int s = dp[0];
        for(int i=1;i<n;i++)
        {
        	int temp = height[i];
        	for(int j=i-1;j>=0 && height[j]>0;j--)
        	{
        		temp = min(temp,height[j]);
        		dp[i] = max(dp[i],temp*(i-j+1));
			}
			s = max(s,dp[i]);
		}
		return s;
    }
};

int main()
{


	return 0;
}

