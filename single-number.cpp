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
    int singleNumber(int A[], int n) {
        int num = 0;
        for(int i=0;i<n;i++)
        	num ^= A[i];
        return num;
    }
};

int main()
{
	/*
	int A[7] = {5,2,3,2,5,3,6};
	cout<<singleNumber(A,7)<<endl;
	*/
	return 0;
}

