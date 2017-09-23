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
#define ll __int64
#define LL long long
#define Input int T; cin>>T;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define clear(a,x) memset(a,x,sizeof(a))
const int INF=0x3f3f3f3f;
const int MAX=1001;

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int run(TreeNode *root) {
    	if(root ==NULL) 
    		return 0;
    	int l = run(root->left);
    	int r = run(root->right);
    	if(l==0 || r==0)
    		return l+r+1;
    	return min(l, r) + 1;
    }
};

int main()
{


	return 0;
}

