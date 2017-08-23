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

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        stack<char> st;
        for(int i=0;i<l;i++)
        {
        	if(s[i] == '(')
        		st.push(')');
        	else if(s[i] == '[')
        		st.push(']');
        	else if(s[i] == '{')
        		st.push('}');
        	else if(st.empty())
        		return false;
        	else if(st.top() != s[i])
        		return false;
        	else
        		st.pop();
		}
		return st.empty();
    }
};

int main()
{


	return 0;
}

