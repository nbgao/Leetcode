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
    string multiply(string num1, string num2) {
        int m = num1.length();
        int n = num2.length();
        int c = 0;
        string r(m+n, '0');
        for(int i=m-1;i>=0;i--)
        {
        	int a = num1[i]-'0';
        	for(int j=n-1;j>=0;j--)
        	{
        		int b = num2[j]-'0';
        		int d = r[i+j+1]-'0';
        		int x = a*b + d + c;
        		r[i+j+1] = x%10+'0';
        		c = x/10;
			}
			if(c)
			{
				r[i] = c+'0';
				c = 0;
			}
		}
		int k = 0;
		while(k<r.size() && r[k]=='0')
			k++;
		return k==r.size()?"0":r.substr(k);
    }
};

int main()
{


	return 0;
}

