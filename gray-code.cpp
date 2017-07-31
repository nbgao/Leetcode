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
    vector<int> grayCode(int n) {
        vector<int> result;
        result.push_back(0);
        for(int i=0;i<n;i++)
        {
        	int high_bit = 1<<i;
        	for(int j=result.size()-1;j>=0;j--)
        	{
        		int num = high_bit | result[j];
        		result.push_back(num);
			}
		}
		return result;
    }
};

int main()
{


	return 0;
}

