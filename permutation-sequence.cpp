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
	int N = 0;
	vector<int> d;
	string result = "";
	int book[15] = {0};
    string getPermutation(int n, int k) {
        DFS(0, n, k);
        return result;
    }
    void DFS(int step, int n, int k)
    {
    	int i;
    	if(step == n)
    	{
    		N++;
    		if(N == k)
    			for(int i=0;i<d.size();i++)
    				result += d[i] + '0';
		}else{
			for(int i=1;i<=n;i++)
			{
				if(book[i] == 0)
				{
					d.push_back(i);
					book[i] = 1;
					DFS(step+1, n, k);
					book[i] = 0;
					d.pop_back();
				}
			}
		}
	}
};

int main()
{


	return 0;
}

