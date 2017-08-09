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

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
  		if(strs.empty())
  			return "";
  		sort(strs.begin(),strs.end());
  		
  		int n = strs.size();
  		int l = min(strs[0].size(),strs[n-1].size());
  		for(int i=0;i<l;i++)
  			if(strs[0][i] != strs[n-1][i])
  				return strs[0].substr(0,i);
  		return strs[0].substr(0,l);
    }
};

int main()
{


	return 0;
}

