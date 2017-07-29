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
    int singleNumber(int A[], int n) {
        int ones = 0;	//记录只出现过1次的bits 
        int twos = 0;	//记录只出现过2次的bits
        int threes;
		for(int i=0;i<n;i++)
		{
			int t = A[i];
			twos |= ones&t;		//要在更新ones前面更新twos 
			ones ^= t;
			threes = ones&twos;		//ones和twos中都为1即出现了3次 
			ones &= ~threes;	//抹去出现了3次的bits 
			twos &= ~threes; 
		}
		return ones;
    }
};

int main()
{

	return 0;
}

