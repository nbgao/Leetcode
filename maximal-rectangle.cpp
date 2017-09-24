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
    int maximalRectangle(vector<vector<char> > &matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==0 || n==0)
        	return 0;
        
        int Max = (matrix[0][0]==1?1:0);
        int l = 0, r = n;
		vector<int> h(n,0), left(n,0), right(n,n);
        
        for(int i=0;i<m;i++)
        {
        	for(int j=0;j<n;j++)
        		h[j] = (matrix[i][j]=='1' ? h[j]+1:0);
        	
        	l = 0;
        	for(int j=0;j<n;j++)
        	{
        		if(matrix[i][j] == '1')
        			left[j] = max(left[j], l);
        		else{
        			left[j] = 0;
        			l = j + 1;
				}
			}
			
			r = n;
			for(int j=n-1;j>=0;j--)
			{
				if(matrix[i][j] == '1')
					right[j] = min(right[j], r);
				else{
					right[j] = n;
					r = j;
				}
			}
			
			for(int j=0;j<n;j++)
				Max = max(Max, h[j]*(right[j]-left[j]));
		}
		return Max;
    }
};

int main()
{


	return 0;
}

