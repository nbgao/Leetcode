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
    int sqrt(int x) {
        long r = x;
        while(r*r > x)
        	r = (r + x/r)>>1;
        return r;
    }
};

int main()
{


	return 0;
}

