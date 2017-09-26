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

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> result;
        int l = intervals.size();
        if(l==0)
        	return result;
        sort(intervals.begin(), intervals.end(), cmp);
        result.push_back(intervals[0]);
        
        for(int i=1;i<l;i++)
        {
        	if(result.back().end >= intervals[i].start)
        		result.back().end = max(result.back().end, intervals[i].end);
        	else
        		result.push_back(intervals[i]);
		}
		return result;
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

