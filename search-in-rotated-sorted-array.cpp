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
    int search(int A[], int n, int target) {
		int l = 0,h = n-1;
		while(l <= h)
		{
			int mid = (l+h)/2;
			if(A[mid] == target)
				return mid;
			if(A[l] <= A[mid])
			{
				if(A[l] <= target && target <= A[mid])
					h = mid - 1;
				else
					l = mid + 1;
			}else{
				if(A[mid] <= target && target <= A[h])
					l = mid + 1;
				else
					h = mid - 1;
			}
		}
		return -1;
    }
};

int main()
{


	return 0;
}

