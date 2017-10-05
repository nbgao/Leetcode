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
    vector<vector<int> > subsets(vector<int> &S) {
        vector<vector<int>> result;
        vector<vector<int>> res;
        vector<int> v;
        result.push_back(v);
        res.push_back(v);
        for(int i=0;i<S.size();i++){
            int n = result.size();
            for(int j=0;j<n;j++){
                result.push_back(result[j]);
                result[j].push_back(S[i]);
                sort(result[j].begin(), result[j].end());
            }
             
        }
        sort(result.begin(), result.end());
        for(int j=1;j<=S.size();j++)
            for(int k=0;k<result.size();k++)
                if(result[k].size() == j)
                    res.push_back(result[k]);
        return res;
    }
};

int main()
{


	return 0;
}

