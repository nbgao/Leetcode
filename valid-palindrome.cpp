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
    bool isPalindrome(string s) {
        int l = s.length();
        for(int i=0,j=l-1;i<j;i++,j--)
        {
        	while(i<j && !isalnum(s[i]))
        		i++;
        	while(i<j && !isalnum(s[j]))
        		j--;
        	if(i<j && tolower(s[i]) != tolower(s[j]))
        		return false;
		}
		return true;
    }
};

int main()
{


	return 0;
}

