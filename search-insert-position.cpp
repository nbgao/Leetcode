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
    int searchInsert(int A[], int n, int target) {
        int i=0;
        for(i=0;i<n;i++)
        {
        	if(target <= A[i])
        		return i;
		}
        return n; 
    }
};

int main()
{


	return 0;
}

