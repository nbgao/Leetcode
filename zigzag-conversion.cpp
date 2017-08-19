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
    string convert(string s, int nRows) {
        if(nRows <= 1)
        	return s;
        vector<string> z(nRows,"");
        int step = 1,row = 0;
        int l = s.length();
        for(int i=0;i<l;i++)
        {
        	z[row] += s[i];
        	if(row == 0)
        		step = 1;
        	else if(row == nRows-1)
        		step = -1;
        	row += step;
		}
		string result = "";
		for(int i=0;i<nRows;i++)
        	result += z[i];
        return result;
    }
};


    
int main()
{


	return 0;
}

