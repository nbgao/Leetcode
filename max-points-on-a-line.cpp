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

struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

class Solution {
public:
    int maxPoints(vector<Point> &points) {
        int n = points.size();
        if(n <= 1)
        	return n;
        int count = 0;
        for(int i=0;i<n;i++)
        {
        	map<pair<int,int>,int> M;
			int d = 1;
			for(int j=i+1;j<n;j++)
			{
				if(points[i].x==points[j].x && points[i].y==points[j].y)
				{
					d++;
					continue;
				}
				int dx = points[j].x - points[i].x;
				int dy = points[j].y - points[i].y;
				int g = gcd(dx, dy);
				M[{dx/g, dy/g}]++;
			}
			count = max(count, d);
			for(auto it=M.begin();it!=M.end();it++)
				count = max(count, it->second + d);
		}
		return count;
    }
    int gcd(int a,int b)
    {
    	return (b==0)?a:gcd(b,a%b);
	}
};

int main()
{


	return 0;
}

