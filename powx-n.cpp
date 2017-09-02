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
    double pow(double x, int n) {
    	if(x == 0) 
    		return 0;
    	if(n == 0)
    		return 1;
    	double result = 1;
    	int sign = 0;
    	if(n < 0)
    	{
    		sign = 1;
    		n = -(n+1);
    		result *= x;
		}
        while(n)
		{
			if(n&1)
				result *= x;
			x *= x;
			n>>=1;	
		} 
		return sign?(1/result):result;
	}
};


int main()
{

	return 0;
}

