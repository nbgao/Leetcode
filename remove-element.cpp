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
    int removeElement(int A[], int n, int elem) {
        for(int i=0;i<n;i++) 
        {
        	if(A[i] == elem)
        	{
        		swap(A[i],A[n-1]);
        		n--;
        		i--;
			}
		}
		return n;
    }
};

int main()
{


	return 0;
}

