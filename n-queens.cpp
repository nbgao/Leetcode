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
    vector<vector<string> > solveNQueens(int n) {
        string str;
        for(int i=0;i<n;i++)
    		str.push_back('.');
    	vector<string> vec;
    	int a[n];
    	for(int i=0;i<n;i++)
	    	vec.push_back(str);
	    vector<vector<string> > res;
	    Back(n,0,res,vec,a);
	    return res;
    }
    
    void Back(int n,int t,vector<vector<string> > &res,vector<string> vec,int *a)
    {
    	if(n == t)
    	{
    		res.push_back(vec);
    		return;
		}
		for(int i=0;i<n;i++)
		{
			a[t] = i;
			if(Push(t,a))
			{
				vec[t][i] = 'Q';
				Back(n,t+1,res,vec,a);
				vec[t][i] = '.';
			}
		}
	}
	
	bool Push(int m,int a[])
	{
		bool flag = true;
		for(int i=0;i<m;i++)
		{
			if(a[i] == a[m] || abs(a[m]-a[i]) == (m-i))
			{
				flag = false;
				break;
			}
		}
		return flag;
	}
};

int main()
{


	return 0;
}

