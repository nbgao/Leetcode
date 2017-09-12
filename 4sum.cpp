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

using namespace std;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        vector<vector<int> > result;
        int n = num.size();
        for(int i=0;i<n-3;i++)
        {
        	for(int j=i+1;j<n;j++)
        	{
        		int s = target - num[i] - num[j];
        		int l = j+1;
        		int r = n-1;
        		while(l<r)
        		{
        			while(l<r && num[l]+num[r]>s)
        				r--;
        			if(l==r)
        				break;
        			if(num[l]+num[r] == s)
        			{
        				vector<int> v;
        				v.push_back(num[i]);
        				v.push_back(num[j]);
        				v.push_back(num[l]);
        				v.push_back(num[r]);
        				result.push_back(v);
        				
        				while(l<r && num[l]==num[l+1])
        					l++;
					}
					l++;
				}
				while(j<n-1 && num[j]==num[j+1])
					j++;				
			}
			while(i<n-1 && num[i]==num[i+1])
				i++;
		}
		return result;
    }
};

int main()
{


	return 0;
}

