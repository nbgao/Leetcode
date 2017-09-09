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
    vector<vector<int> > combine(int n, int k) {
    	vector<vector<int> > result;
    	vector<int> v;
    	Solve(1,n,k,result,v);
    	return result;
    }
    void Solve(int x,int n,int k,vector<vector<int> > &result,vector<int> &v)
    {
    	if(k==0)
    	{
    		result.push_back(v);
    		return;
		}
		if(x > n)
			return;
		v.push_back(x);
		Solve(x+1,n,k-1,result,v);
		v.pop_back();
		Solve(x+1,n,k,result,v);
	}
};

int main()
{


	return 0;
}

