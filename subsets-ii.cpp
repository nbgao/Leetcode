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
    vector<vector<int> > subsetsWithDup(vector<int> &S) {
        sort(S.begin(), S.end());
        set<vector<int> > result;
		for(int i=0;i<=S.size();i++) 
		{
			vector<int> p;
			Fun(result, p, 0, i, S);
		}
		return vector<vector<int> > (result.begin(), result.end());
    }
    
    void Fun(set<vector<int> > &result, vector<int> &p, int k, int count, vector<int> &S)
    {
    	if(count == 0)
    	{
    		result.insert(p);
    		return;
		}
		if(k >= S.size())
			return;
		
		p.push_back(S[k]);
		Fun(result, p, k+1, count-1, S);
		p.pop_back();
		Fun(result, p, k+1, count, S);
	}
     
};

int main()
{


	return 0;
}

