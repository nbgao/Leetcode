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
    int romanToInt(string s) {
        int result = 0;
		for(int i=0;i<s.length();i++) 
		{
			if(i>0 && (T(s[i])>T(s[i-1])))
				result += (T(s[i]) - 2*T(s[i-1]));
			else
				result += T(s[i]);
		}
		return result;
    }
    int T(char c)
    {
    	switch(c)
    	{
    		case 'I': return 1;
    		case 'V': return 5;
    		case 'X': return 10;
    		case 'L': return 50;
    		case 'C': return 100;
    		case 'D': return 500;
    		case 'M': return 1000;
    		default: return 0;
		}
	}
};

int main()
{


	return 0;
}

