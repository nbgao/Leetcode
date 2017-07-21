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
    int maxArea(vector<int> &height) {
        int s,maxArea = 0;
        int l=0,r=height.size()-1;
        while(l<r){
            s = (r-l)*min(height[l],height[r]);
            if(s > maxArea)
                maxArea = s;
            if(height[l]>height[r])
                r--;
            else
                l++;
        }
    	return maxArea;
	}
};

int main()
{
	
	return 0;
}

