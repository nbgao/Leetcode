#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
    	int f[100000] = {0,1,2};
        for(int i=3;i<=n;i++)
        	f[i] = f[i-1] + f[i-2];
        return f[n];
    }
};

int main()
{


	return 0;
}

