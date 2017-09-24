#include <bits/stdc++.h>
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
#include <set>

using namespace std;

class Solution {
public:
    int candy(vector<int> &ratings) {
        int l = ratings.size();
		if(l == 1)
			return 1;
		int s = 0;
		vector<int> a(l,1);
		
		for(int i=1;i<l;i++)
			if(ratings[i] > ratings[i-1])
				a[i] = a[i-1] + 1;
		
		for(int i=l-2;i>=0;i--)
			if(ratings[i] > ratings[i+1] && a[i] <= a[i+1])
				a[i] = a[i+1] + 1;
		
		for(int i=0;i<l;i++)
			s += a[i];
		
		return s;
    }
};

int main()
{


	return 0;
}

