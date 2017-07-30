#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;

class Solution {
public:
	void fun(int n,int left,int right,string s,vector<string> &list)
	{
		if(left == n && right == n)
		{
			list.push_back(s);
			return;
		}
		if(left < n)
			fun(n,left+1,right,s+"(",list);
		if(left > right && right < n)
			fun(n,left,right+1,s+")",list);
	}
    vector<string> generateParenthesis(int n) {
        vector<string> list;
        fun(n,0,0,"",list);
        return list;
    }
};

int main()
{


	return 0;
}

