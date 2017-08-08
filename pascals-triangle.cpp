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
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        for(int i=0;i<numRows;i++)
        {
        	vector<int> v;
        	for(int j=0;j<=i;j++)
        	{
        		if(j==0 || j==i)
        			v.push_back(1);
        		else if(i != 0)
        			v.push_back(res[i-1][j-1]+res[i-1][j]);
			}
			res.push_back(v);
		}
		return res;
    }
};

int main()
{


	return 0;
}

