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
    int removeDuplicates(int A[], int n) {
        int k=2;
        if(n <= 2)
        	return n;
        
		for(int i=2;i<n;i++)
        	if(A[i] != A[k-2])
        		A[k++] = A[i];
		
		return k;
    }
};

int main()
{


	return 0;
}

