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
    char *strStr(char *haystack, char *needle) {
        int m = strlen(haystack);
        int n = strlen(needle);
        if(m < n)
        	return NULL;
        int d = m - n;
        for(int i=0;i<=d;i++)
        {
        	int j = 0;
        	for(;j<n;j++)
        	{
        		if(haystack[i+j] != needle[j])
        			break;
			}
			if(j == n)
				return haystack + i;
		}
		return NULL;
    }
};

int main()
{


	return 0;
}

