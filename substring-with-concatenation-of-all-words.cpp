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
    vector<int> findSubstring(string S, vector<string> &L) {
        map<string,int> M;
        vector<int> v;
        
        for(string s: L)
        	M[s]++;
        	
        int n = S.size();
        int m = L.size();
        int l = L[0].size();
        
        for(int i=0;i<n-m*l+1;i++)
        {
        	map<string,int> T;
        	int k = 0;
        	for(;k<m;k++)
        	{
        		string s = S.substr(i+k*l,l);
        		if(M.find(s) != M.end())
        		{
        			T[s]++;
        			if(T[s] > M[s])
        				break;
				}else
					break;
			}
			if(k == m)
				v.push_back(i);
		}
		return v;		
    }
};

int main()
{


	return 0;
}

