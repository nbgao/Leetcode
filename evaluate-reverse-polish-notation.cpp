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
    int evalRPN(vector<string> &tokens) {
        stack<int> S;
        int l = tokens.size();
        for(int i=0;i<l;i++)
        {
        	string s = tokens[i];
        	if(s=="+" || s=="-" || s=="*" || s=="/")
        	{
        		if(S.size()<2)
        			return 0;
        		int b = S.top();
        		S.pop();
        		int a = S.top();
        		S.pop();
        		
        		int r = 0;
        		if(s == "+")
        			r = a + b;
        		else if(s == "-")
        			r = a - b;
        		else if(s == "*")
        			r = a * b;
        		else if(s == "/")
        			r = a / b;
				
        		S.push(r);
			}else
				S.push(atoi(s.c_str()));
		}
		return S.top();
    }
};

int main()
{


	return 0;
}

