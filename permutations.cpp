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
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > res;
        permutation(res,num,0);
        return res;
    }
    void permutation(vector<vector<int> > &res,vector<int> &num,int s)
    {
    	if(s == num.size()-1)
    		res.push_back(num);
    	else{
    		for(int i=s;i<num.size();i++)
    		{
    			swap(num[s],num[i]);
				permutation(res,num,s+1);
				swap(num[s],num[i]);
			}
		}    		
	}
};

int main()
{


	return 0;
}

