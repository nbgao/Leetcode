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
    void nextPermutation(vector<int> &num) {
        int n = num.size();
        if(n == 0)
        	return;
        int i,flag=0;
        for(i=n-1;i>0;i--)
        	if(num[i] > num[i-1])
        	{
        		flag = 1;
        		break;
			}
		
		if(flag == 0)
			sort(num.begin(),num.end());
		else{
			for(int j=n-1;j>=i;j--)
				if(num[j] > num[i-1])
				{
					swap(num[j],num[i-1]);
					break;
				}
			sort(num.begin()+i,num.end());
		}
    }
};

int main()
{


	return 0;
}

