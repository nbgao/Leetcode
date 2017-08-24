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

class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        vector<string> result;
        int l = strs.size();
        if(l == 0)
        	return result;
        map<string,int> mapping;
        for(int i=0;i<l;i++)
        {
        	string tmp = strs[i];
        	sort(tmp.begin(),tmp.end());
        	if(mapping.find(tmp) == mapping.end())
        		mapping[tmp] = i;
			else{
				if(mapping[tmp] >= 0)
				{
					result.push_back(strs[mapping[tmp]]);
					mapping[tmp] = -1;
				}
				result.push_back(strs[i]);
			}
		}
        return result;
    }
};

int main()
{


	return 0;
}

