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
    int numTrees(int n) {
        if(n <= 1)
        	return 1;
        
        int sum = 0;
        for(int i=2;i<=n;i++)
        	sum += numTrees(i-1) + numTrees(n-i);
        	
        return sum;
    }
};

int main()
{

	return 0;
}

