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
    vector<string> letterCombinations(string digits) {
        string n2w[12] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> result(1,"");
        for(int i=0;i<digits.size();i++)
        {
        	vector<string> temp;
        	for(int j=0;j<result.size();j++)
        	{
        		int num = digits[i] - '0';
        		for(int k=0;k<n2w[num].size();k++)
        			temp.push_back(result[j]+n2w[num][k]);	        		
			}
			result = temp;
		}
		return result;
    }
};

int main()
{


	return 0;
}

