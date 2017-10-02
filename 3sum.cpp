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
    vector<vector<int> > threeSum(vector<int> &num) {
	    int len = num.size();
		vector<vector<int> > result;
	    sort(num.begin(), num.end());
	    for(int i=0;i<len;i++)
	    {
	    	if(i==0 || num[i]!=num[i-1])
	    	{
	    		int l = i+1, r = len-1;
	    		while(l < r)
	    		{
	    			while(l<r && num[i]+num[l]+num[r]>0)
	    				r--;
	    			if(l<r && num[i]+num[l]+num[r]==0)
	    			{
	    				vector<int> v(3);
	    				v[0] = num[i];
	    				v[1] = num[l];
	    				v[2] = num[r];
	    				result.push_back(v);
	    				while(l<r && num[l]==v[1])
	    					l++;
					}else
						l++;
				}
			}
		}
	    return result;
    }
};

int main()
{


	return 0;
}

