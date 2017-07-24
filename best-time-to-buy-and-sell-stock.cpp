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
    int maxProfit(vector<int> &prices) {
        int MaxProfit = 0,Min = prices[0];
        for(int i=1;i<prices.size();i++)
        {
        	if(prices[i]>Min)
        		MaxProfit = max(MaxProfit,prices[i]-Min);
        	else
        		Min = prices[i];
		}
		return MaxProfit;
    }
};

int main()
{

	return 0;
}

