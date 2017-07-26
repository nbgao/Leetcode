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
    int maxSubArray(int A[], int n) {
        int sum=A[0],Max=A[0];
        for(int i=1;i<n;i++)
        {
        	if(sum<0)
        		sum=0;
        	sum += A[i];
        	Max = max(Max,sum);
		}
		return Max;
    }
};

int main()
{


	return 0;
}

