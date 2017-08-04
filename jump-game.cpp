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
    bool canJump(int A[], int n) {
        int Max = 0;
        for(int i=0;i<n && i<=Max;i++)
        	Max = max(Max,A[i]+i);
        if(Max < n-1)
        	return false;
        return true;
    }
};

int main()
{


	return 0;
}

