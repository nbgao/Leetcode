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
        int ones = 0;	//��¼ֻ���ֹ�1�ε�bits 
        int twos = 0;	//��¼ֻ���ֹ�2�ε�bits
        int threes;
		for(int i=0;i<n;i++)
		{
			int t = A[i];
			twos |= ones&t;		//Ҫ�ڸ���onesǰ�����twos 
			ones ^= t;
			threes = ones&twos;		//ones��twos�ж�Ϊ1��������3�� 
			ones &= ~threes;	//Ĩȥ������3�ε�bits 
			twos &= ~threes; 
		}
		return ones;
    }
};

int main()
{

	return 0;
}

