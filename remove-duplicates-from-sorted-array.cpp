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
    int removeDuplicates(int A[], int n) {
    	if(n <= 0)
    		return 0;
    		
		int k=0;
    	for(int i=1;i<n;i++)
    	{
    		if(A[k] != A[i])
    			A[++k] = A[i];
		}
		return k+1;
    }
};

    int removeDuplicates(int A[], int n) {
    	int length = 0;
        for(int i=0;i<n;i++)
        {
			bool isDuplicate = false;
        	int num = A[i];
        	for(int j=0;j<i;j++)
        	{
        		if(num == A[j])
				{
        			isDuplicate = true;
        			break;
				}
			}
			if(isDuplicate)
			{
				for(int j=i;j<n-1;j++)
					A[j] = A[j+1];
				n--;
				i--;
			}else
				length++;
		}
		return length;
    }
    
int main()
{
	int A[6]={1,1,2,2,3,2},n=6,length;
	length = removeDuplicates(A,n);
	cout<<length<<endl;
	for(int i=0;i<length;i++)
		cout<<A[i]<<" ";
	cout<<endl;
	return 0;
}

