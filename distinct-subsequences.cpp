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
    int numDistinct(string S, string T) {
        int l = T.length();
        vector<int> result(l+1);
        result[0] = 1;
        for(int i=1;i<=S.length();i++)
        	for(int j=min(i,l);j>0;j--)
        	{
        		if(S[i-1] == T[j-1])
        			result[j] = result[j] + result[j-1];
			}
        return result[l];
    }
};

int main()
{


	return 0;
}

