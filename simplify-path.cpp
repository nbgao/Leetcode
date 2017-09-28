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
    string simplifyPath(string path) {
        int l = path.length();
		stack<string> S;
		for(int i=0;i<l;i++) 
		{
			while(i<l && path[i]=='/')
				i++;
			if(i==l)
				break;
			
			string t;
			while(i<l && path[i]!='/')
				t += path[i++];
			if(t==".")
				continue;
			else if(t==".."){
				if(!S.empty())
					S.pop();
			}else
				S.push(t);
			
		}
		string result;
		while(!S.empty())
		{
			result = '/' + S.top() + result;
			S.pop();
		}
		if(result == "")
			result = "/";
		return result;
    }
};

int main()
{


	return 0;
}

