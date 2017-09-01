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
    string addBinary(string a, string b) {
        int l1=a.length()-1,l2=b.length()-1;
        string sum = "";
        int s=0,c=0;
        while(l1>=0 || l2>=0 || c)
        {
        	int num1 = l1>=0?a[l1--]-'0':0;
        	int num2 = l2>=0?b[l2--]-'0':0;
        	s = num1 + num2 + c;
        	c = s>>1;
        	sum = char(s%2 + '0') + sum;
		}
		return sum;
    }
};

int main()
{


	return 0;
}

