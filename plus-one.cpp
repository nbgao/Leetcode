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
    vector<int> plusOne(vector<int> &digits) {
        vector<int> num = digits;
        int n = digits.size();
		int C = 0;
		num[n-1] += 1;
		for(int i=n-1;i>=0;i--)
		{
			num[i] += C + 1;
			if(num[i] > 9)
			{
				C = 1;
				num[i] = num[i]%10;
			}else{
				C = 0;
			}
		}
		if(C == 1)
			num.insert(num.begin(),1);
		return num;        
    }
};

int main()
{


	return 0;
}

