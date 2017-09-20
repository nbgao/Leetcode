#include <bits/stdc++.h>
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
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        if(m<0 || n<0)
        	return 0;
        double r = 0;
        if((m+n) & 1)
        	r = findK(A,m,B,n,(m+n+1)/2);
        else
        	r = (double)(findK(A,m,B,n,(m+n)/2) + findK(A,m,B,n,(m+n)/2+1) )/2;
    	return r;
	}
	
	int findK(int A[], int m, int B[], int n, int k)
	{
		if(n < m)
			return findK(B,n,A,m,k);
		if(m == 0)
			return B[k-1];
		if(k == 1)
			return (A[0]<B[0])?A[0]:B[0];
		int a = min(m, k/2);
		int b = k - a;
		if(A[a-1] < B[b-1])
			return findK(A+a, m-a, B, n, k-a);
		else if(A[a-1] > B[b-1])
			return findK(A, m, B+b, n-b, k-b);
		else
			return A[a-1];
	}
};

int main()
{


	return 0;
}

