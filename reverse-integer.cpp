#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool tag = true;
        int y = 0;
        
        if(x < 0)
        {
        	tag = false;
        	x = -x;
		}
		
		while(x)
		{
			y = 10*y + x%10;
			x /= 10;
		}
		
		if(y<INT_MIN || y>INT_MAX)
			return 0;
		if(tag)
			return y;
		else
			return -y;
		
    }
};

int main()
{
	/*
	int x = -987612345;
	cout<<reverse(x)<<endl;
	*/
	return 0;
}

