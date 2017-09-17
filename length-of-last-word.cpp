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

using namespace std;

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int l = strlen(s);
        int k = 0;
        for(int i = l-1;i>=0;i--)
        {
        	if(s[i] == ' ')
        	{
        		if(k)
        			break;
			}else
        		k++;
		}
		return k;
    }
};

int main()
{


	return 0;
}

