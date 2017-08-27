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
    vector<int> searchRange(int A[], int n, int target) {
        int l1=0,r1=n-1,l2=0,r2=n-1;
        while(l1 <= r1)
        {
        	int mid = l1+((r1-l1)>>1);
        	if(A[mid] < target)
        		l1 = mid + 1;
        	else
        		r1 = mid - 1;
		}
		while(l2 <= r2)
		{
			int mid = l2+((r2-l2)>>1);
			if(A[mid] > target)
				r2 = mid - 1;
			else
				l2 = mid + 1;
		}
		vector<int> result(2,-1);
		if(l1 <= r2)
		{
			result[0] = l1;
			result[1] = r2;
		}
		return result;
    }
};

int main()
{


	return 0;
}

