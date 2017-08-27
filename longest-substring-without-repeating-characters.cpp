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

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
		map<char,int> mapping;
		int result=0,p=0,q=0;
		for(q=0;q<n;q++)
		{
			while(mapping[s[q]])
			{
				mapping[s[p]]--;
				p++; 
			}
			result = max(result,q-p+1);
			mapping[s[q]]++;
		}
		return result;
    }
};

int main()
{


	return 0;
}

