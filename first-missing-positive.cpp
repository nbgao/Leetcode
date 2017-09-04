#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        for(int i=0;i<n;i++)
        {
        	int x = A[i];
        	while(x>0 && x<=n && A[x-1]!=x)
        		swap(x, A[x-1]);
		}
    	
    	for(int i=0;i<n;i++)
    		if(A[i] != i+1)
    			return i+1;
    	
		return n+1;
    }
};

int main()
{


	return 0;
}

