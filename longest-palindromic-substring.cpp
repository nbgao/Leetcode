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
    string longestPalindrome(string s) {
        if(s.size()<=1)
        	return s;
        int min_s = 0, max_l = 1;
        int n = s.length();
        for(int i=0;i<n;)
        {
        	if(n-i <= max_l/2)
        		break;
        	int j=i,k=i;
        	while(k<n-1 && s[k]==s[k+1])
        		k++;
        	i = k+1;
        	while(j>0 && k<n-1 && s[j-1]==s[k+1])
        	{
        		k++;
        		j--;
			}
			int new_l = k-j+1;
			if(new_l > max_l)
			{
				max_l = new_l;
				min_s = j;
			}						 
		}
		return s.substr(min_s,max_l);
    }
};

int main()
{


	return 0;
}

