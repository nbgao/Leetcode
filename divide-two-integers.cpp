#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int divide(long long dividend, long long divisor) {	
        long long result=0,flag=0;
		if((dividend<0)^(divisor<0))
			flag=1;
		
		long long a = abs(dividend), b = abs(divisor);
		while(a >= b)
		{
			long long k = 1, t = b;
			while(a >= t)
			{
				a -= t;
				result += k;
				k <<= 1;
				t += t; 
			}
		}
		return flag?-result:result;
    }
};

int main()
{


	return 0;
}

