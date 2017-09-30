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

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        vector<Interval> result;
        for(auto i:intervals)
        {
        	if(Fun(i, newInterval))
        		result.push_back(i);
        	else{
        		newInterval.start = min(i.start, newInterval.start);
        		newInterval.end = max(i.end, newInterval.end);
			}
		}
		result.push_back(newInterval);
		sort(result.begin(), result.end(), cmp);
		return result;
		
    }
    bool Fun(const Interval &a, const Interval &b)
    {
    	return (a.end < b.start) || (b.end < a.start) ;
	}
	static bool cmp(const Interval &a, const Interval &b)
	{
		return a.start < b.start;
	}
};

int main()
{


	return 0;
}

