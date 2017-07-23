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
    bool isPalindrome(int x) {
        int y = x,z = 0;
        if(y < 0)
        	return false;
        	
        while(y)
        {
        	z = 10*z + y%10;
        	y /= 10;
		}
		if(z == x)
			return true;
		else
			return false;
    }
};

int main()
{
	//cout<<isPalindrome(-12321)<<endl;

	return 0;
}

