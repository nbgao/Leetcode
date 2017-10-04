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
    vector<string> fullJustify(vector<string> &words, int L) {
        vector<string> result;
        int l = words.size();
		for(int i=0,j;i<l;i=j)
		{
			int width = 0;
			for(j=i;j<l && width+words[j].size()+j-i <= L;j++)
				width += words[j].size();
			int space = 1, extra = 0;
			if(j-i!=1 && j!=l){
				space = (L-width)/(j-i-1);
				extra = (L-width)%(j-i-1);
			}
			string line(words[i]);
			for(int k=i+1;k<j;k++)
			{
				line += string(space, ' ');
				if(extra-- > 0)
					line += " ";
				line += words[k];
			}
			line += string(L-line.size(), ' ');
			result.push_back(line);
		} 
		return result;
    }
};

int main()
{


	return 0;
}

