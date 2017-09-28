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

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==0 || n==0)
        	return result;
        
        int l=0, r=n-1, u=0, d=m-1;
        int i,j,k=0;
        while(l<=r && u<=d)
        {
        	for(j=l;j<=r;j++)
        		result.push_back(matrix[u][j]);
        	if(++u > d)
				break;
        	for(i=u;i<=d;i++)
        		result.push_back(matrix[i][r]);
        	if(--r < l)
				break;
        	for(j=r;j>=l;j--)
        		result.push_back(matrix[d][j]);
        	if(--d < u)
        		break;
        	for(i=d;i>=u;i--)
        		result.push_back(matrix[i][l]);
        	if(++l > r)
        		break;
		}
		return result;
    }
};

int main()
{


	return 0;
}

