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
    int atoi(const char *str) {
		int num = 0, sign = 1, i = 0;
        int l = strlen(str);
        
        while(str[i]==' ' && i<l)
        	i++;
        if(str[i]=='-')
        {
        	sign = -1;
        	i++;
		}else if(str[i]=='+')
			i++;
		
		for(;i<l;i++)
		{
			if(str[i]<'0' || str[i]>'9')
				break;
			if(num>INT_MAX/10 || (num==INT_MAX/10 && (str[i]-'0')>INT_MAX%10))
				return (sign==-1)?INT_MIN:INT_MAX;
			num = 10*num + (str[i]-'0');				 
		}
		return sign*num;
    }
};

int main()
{


	return 0;
}

