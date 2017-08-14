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
    int threeSumClosest(vector<int> &num, int target) {
        int n = num.size();
		int result = num[0] + num[1] + num[n-1];
		sort(num.begin(),num.end());
		for(int i=0;i<n-2;i++)
		{
			int start = i + 1;
			int end = n - 1;
			while(start < end)
			{
				int sum = num[i] + num[start] + num[end];
				if(sum < target)
					start++;
				else
					end--;
				
				if(abs(sum-target) < abs(result-target))
					result = sum;
			}
		}
		return result;
    }
};

int main()
{


	return 0;
}

