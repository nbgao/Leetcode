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
    int longestValidParentheses(string s) {
        int l = s.length();
		if(s == "" || l<=0) 
			return 0;
		
		stack<int> S;
		int Max = 0;
		int t = -1;
		for(int i=0;i<l;i++) 
		{
			if(s[i] == '(') 
				S.push(i);			
			else{
				if(S.empty()) 
					t = i;
				else{
					S.pop();
					if(S.empty())
						Max = max(Max, i - t);
					else
						Max = max(Max, i - S.top());
				}
			}
		}
		return Max;
    }
};

int main()
{


	return 0;
}

