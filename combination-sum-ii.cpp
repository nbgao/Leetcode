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
#include <set>

using namespace std;

class Solution {
	vector<int> d;
	vector<vector<int> > result;
	set<vector<int> > s;
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        dfs(num,0,target,0);
        set<vector<int> >::iterator it;
        for(it=s.begin();it!=s.end();it++)
        	result.push_back(*it);
        return result;
    }
    void dfs(vector<int> &num,int sum,int target,int step)
    {
    	if(sum > target || sum < 0)
    		return;
    	if(sum == target)
    		s.insert(d);
    	else{
    		for(int i=step;i<num.size();i++)
    		{
    			d.push_back(num[i]);
    			dfs(num, sum+num[i], target, i+1);
    			d.pop_back();
			}
		} 
	}
};

int main()
{


	return 0;
}

