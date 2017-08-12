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
    string countAndSay(int n) {
        if(n <= 0)
        	return "";
        string res = "1";
        for(int i=1;i<n;i++)
        {
        	string t = "";
        	int count = 1;
        	for(int j=1;j<res.length();j++)
        	{
        		if(res[j] == res[j-1])	
        			count++;
        		else{
        			t.push_back(count+'0');
					t.push_back(res[j-1]);
        			count = 1;
				}
			}
			t.push_back(count+'0');
			t.push_back(res[res.length()-1]);
			res = t;
		}
		return res; 
    }
};

int main()
{


	return 0;
}

