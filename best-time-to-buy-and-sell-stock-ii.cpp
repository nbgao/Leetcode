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
        int sum = 0;
        int n = prices.size();
        for(int i=0;i<n-1;i++)
        {
        	if(prices[i+1]>prices[i])
        		sum += prices[i+1] - prices[i];
		}
		return sum;
    }
};


int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(5);
	a.push_back(2);
	a.push_back(4);
	a.push_back(6);
	a.push_back(3);
	a.push_back(4);
	//cout<<maxProfit(a)<<endl;
	return 0;
}

