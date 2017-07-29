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
    void sortColors(int A[], int n) {
        int start=0,end=0;
        for(int i=0;i<n-end;i++)
        {
        	if(A[i] == 0)
        	{
        		swap(A[i],A[start]);
				start++;        		
			}else if(A[i] == 2){
				swap(A[i],A[n-1-end]);
				end++;
				i--;
			}
		}
    }
};

int main()
{


	return 0;
}

