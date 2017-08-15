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
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int start = gas.size() - 1;
        int end = 0;
        int V = gas[start] - cost[start];
        while(start > end)
        {
        	if(V>=0)
        	{
        		V += gas[end] - cost[end];
        		end++;
			}else{
				start--;
				V += gas[start] - cost[start];
			}
		}
		return V>=0?start:-1;
    }
};

int main()
{


	return 0;
}

