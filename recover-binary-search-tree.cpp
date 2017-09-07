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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode *pre,*a,*b;
    void recoverTree(TreeNode *root) {
        pre = a = b = NULL;
        DFS(root);
        if(a && b)
        	swap(a->val, b->val);
    }
    void DFS(TreeNode *root)
    {
    	if(root == NULL)
    		return;
    	DFS(root->left);
    	if(pre && pre->val > root->val)
    	{
    		if(a == NULL)
    			a = pre;
    		b = root;
		}
		pre = root;
		DFS(root->right);
	}
};

int main()
{


	return 0;
}

