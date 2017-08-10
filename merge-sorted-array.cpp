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
    void merge(int A[], int m, int B[], int n) {
        int i=0,j=0;
        while(i<m && j<n)
        {
        	if(A[i] > B[j])
        	{
        		for(int k=m-1;k>=i;k--)
					A[k+1] = A[k];
				A[i] = B[j];
				i++;
				m++;
				j++;			
			}else{
				i++;
			}	
		}
		while(j < n)
		{
			A[i] = B[j];
			i++;
			m++;
			j++;
		}
    }
};

int main()
{


	return 0;
}

