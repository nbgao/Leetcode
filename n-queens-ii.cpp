#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
	int count = 0;
	int x[9];
    int totalNQueens(int n) {
        backtrack(1,n);
        return count;
    }
    
    void backtrack(int t,int n)
    {
    	if(t>n)
    		count++;
    	else{
    		for(int i=1;i<=n;i++)
    		{
    			x[t] = i;
    			if(place(t))
    				backtrack(t+1,n);
			}
		}
	}
	bool place(int t)
	{
		for(int i=1;i<t;i++)
			if(abs(x[t]-x[i]) == abs(t-i) || x[t] == x[i])
				return false;
		return true;
	}
};

int main()
{


	return 0;
}

