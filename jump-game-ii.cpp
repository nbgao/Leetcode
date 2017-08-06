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
    int jump(int A[], int n) {
        int cur = 0, end = 0,jumps = 0;
        for(int i=0;i<n && cur>=i;i++)
        {
        	if(i > end)
        	{
        		end = cur;
        		jumps++;
			}
			cur = max(cur,A[i]+i);
		}
		return jumps;
    }
};

int main()
{


	return 0;
}

