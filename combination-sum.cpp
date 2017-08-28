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
	vector<int> d;
	vector<vector<int> > result;
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        sort(candidates.begin(),candidates.end());
        dfs(candidates,0,target,0);
        return result;
    }
    void dfs(vector<int> &candidates,int sum,int target,int step)
    {
    	if(sum > target || sum < 0)
    		return;
    	if(sum == target)
    		result.push_back(d);
    	else{
    		for(int i=step;i<candidates.size();i++)
    		{
    			d.push_back(candidates[i]);
    			dfs(candidates, sum+candidates[i], target, i);
    			d.pop_back();
			}
		} 
	}
};

int main()
{


	return 0;
}

