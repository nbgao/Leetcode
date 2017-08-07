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
    int trap(int A[], int n) {
        int l=A[0],r=A[n-1],sum=0;
        int i=1,j=n-2;
        while(i <= j)
        {
        	if(l > r)
        	{
        		sum += max(r-A[j],0);
        		r = max(r,A[j--]);
			}else{
				sum += max(l-A[i],0);
				l = max(l,A[i++]);
			}		
		}
		return sum;
    }
};

int main()
{


	return 0;
}

