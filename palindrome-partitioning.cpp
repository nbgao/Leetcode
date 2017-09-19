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

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string> > result;
		vector<string> v;
		DFS(s,v,result);
		return result;
    }
    void DFS(string s,vector<string> &v,vector<vector<string> > &result){
    	if(s.size() < 1){
    		result.push_back(v);
    		return;
		}
		for(int i=0;i<s.size();i++)
		{
			int begin = 0;
			int end = i;
			while(begin < end)
			{
				if(s[begin] == s[end])
				{
					begin++;
					end--;
				}else
					break;
			}
			if(begin >= end)
			{
				v.push_back(s.substr(0,i+1));
				DFS(s.substr(i+1), v, result);
				v.pop_back();
			}
		}
	}
};

int main()
{


	return 0;
}

