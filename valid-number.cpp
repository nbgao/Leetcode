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
    bool isNumber(const char *s) {
        string str(s);
        int k = str.find_first_not_of(' ');
        if(str[k]=='+' || str[k]=='-')
        	k++;
        int p=0, num1=0;
        for(;str[k]>='0' && str[k]<='9' || str[k]=='.';k++)
        	s[k] == '.'?p++:num1++;
        if(p>1 || num1<1)
        	return false;
        
        if(str[k] == 'e' || str[k]=='E')
        {
        	k++;
        	if(str[k] == '+' || str[k]=='-')
        		k++;
        	int num2 = 0;
        	for(;str[k]>='0' && str[k]<='9';k++)
        		num2++;
        	if(num2==0)
        		return false;
		}
		for(;str[k]==' ';k++);
		return str[k]=='\0';
    }
};

int main()
{


	return 0;
}

