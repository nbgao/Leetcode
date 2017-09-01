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
    int longestConsecutive(vector<int> &num) {
        set<int> Set(num.begin(),num.end());
        int result = 1;
        for(int x:num)
        {
        	if(Set.find(x) == Set.end())
        		continue;
        	Set.erase(x);
        	int l=x-1,r=x+1;
        	while(Set.find(l) != Set.end())
        		Set.erase(l--);
        	while(Set.find(r) != Set.end())
        		Set.erase(r++);
        	result = max(result,r-l-1);
		}
		return result;
    }
};

int main()
{


	return 0;
}

