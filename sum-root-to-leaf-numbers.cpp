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
    int sumNumbers(TreeNode *root) {
        int S=0;
        if(root == NULL)
        	return S;
		return sum(root, S);
    }
	int sum(TreeNode *p, int n)
	{
		if(p == NULL)
			return 0;
		n = n*10 + p->val;
		if(p->left==NULL && p->right==NULL)
		{
			return n;
		}
		return sum(p->left,n) + sum(p->right,n);
	}
};

int main()
{


	return 0;
}

