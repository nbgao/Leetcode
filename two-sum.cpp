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
#define ll __int64
#define LL long long
#define Input int T; cin>>T;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define clear(a,x) memset(a,x,sizeof(a))
const int INF=0x3f3f3f3f;
const int MAX=1001;

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int n = numbers.size();
        vector<int> result(2);
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
        	if(m.find(numbers[i]) != m.end())
        	{
        		result[0] = m[numbers[i]];
        		result[1] = i+1;
        		break;
			}else{
				m[target-numbers[i]] = i+1;
			}
		}
		return result;
    }
};

int main()
{


	return 0;
}

