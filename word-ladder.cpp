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
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        queue<string> q1,q2,*p1,*p2;
        int count = 0;
        p1 = &q1;
		p2 = &q2; 
		for(p1->push(start);!p1->empty();swap(p1,p2))
		{
			count++;
			for(;!p1->empty();p1->pop())
			{
				string s = p1->front();
				for(int i=0;i<s.length();i++)
				{
					string t = s;
					for(char c='a';c<='z';c++)
					{
						if(c==s[i])
							continue;
						t[i] = c;
						if(t==end)
							return count+1;
						if(dict.find(t) != dict.end())
						{
							p2->push(t);
							dict.erase(t);
						}
					}
				}
			}
		}
        return 0;
    }
};

int main()
{


	return 0;
}

