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
    bool search(int A[], int n, int target) {
        int l=0,r=n-1;
        while(l <= r)
        {
        	int mid = (l+r)/2;
        	if(A[mid] == target)
        		return true;
        	if(A[mid] > A[l])
        	{
        		if(A[l] <= target && target <= A[mid])
        			r = mid - 1;
        		else
        			l = mid + 1;
			}else if(A[mid] < A[l]){
				if(A[mid] < target && target <= A[r])
					l = mid + 1;
				else
					r = mid - 1;
			}else
				l++;
		}
		return false;
    }
};

int main()
{


	return 0;
}

