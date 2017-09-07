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
	vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        string t;
        DFS(result,t,s,0);
        return result;
    }

    void DFS(vector<string> &result, string t, string s, int count)
    {
    	if(count==3 && isValid(s))
    	{
    		result.push_back(t+s);
    		return;
		}
		for(int i=1;i<4 && i<s.size();i++)
		{
			string sub = s.substr(0,i);
			if(isValid(sub))
				DFS(result, t+sub+'.', s.substr(i),count+1);
		}
	}

	bool isValid(string &s)
	{
		stringstream ss(s);
		int num;
		ss>>num;
		if(s.size()>1)
			return s[0]!='0' && num>=0 && num<=255;
		return num>=0 && num<=255;
	}
};

int main()
{


	return 0;
}

