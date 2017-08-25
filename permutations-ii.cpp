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
	int a[19] = {0};
    void permutation(vector<vector<int> > &result, vector<int> &num,int k,int n)
    {
    	if(k == n)
    		result.push_back(num);
    	else{
    		for(int i=0;i<19;i++)
			{
				if(a[i] > 0) 
				{
					a[i]--;
					num[k] = i-9;
					permutation(result,num,k+1,n);
					a[i]++;
				}
			} 
		}
	}
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        int n = num.size();
		for(int i=0;i<num.size();i++)
			a[num[i]+9]++;
		vector<vector<int> > result;
		permutation(result,num,0,n);
		return result;
	}
};

int main()
{


	return 0;
}

