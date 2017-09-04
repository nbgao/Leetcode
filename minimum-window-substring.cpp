#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
public:
    string minWindow(string S, string T) {
        string result;
        map<char,int>t,s;
        for(auto c:T)
        	t[c]++;
        int count=0,l=0;
        for(int r=0;r<S.length();r++)
        {
        	if(t[S[r]] != 0)
        	{
        		s[S[r]]++;
        		if(s[S[r]] <= t[S[r]])
        			count++;
        		while(count == T.length())
        		{
        			if(result.empty() || result.length()>r-l+1)
        				result = S.substr(l,r-l+1);
        			if(t[S[l]])
        			{
        				s[S[l]]--;
        				if(s[S[l]] < t[S[l]])
        					count--;
					}
					l++;
				}
			}
		}
		return result;
    }
};

int main()
{


	return 0;
}

