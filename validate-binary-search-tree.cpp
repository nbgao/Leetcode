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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isValidBST(TreeNode *root) {
        return solve(root,INT_MIN,INT_MAX);
    }
    bool solve(TreeNode *root,int l,int h) 
    {
    	if(root == NULL)
    		return true;
    	if(root->val <= l || root->val >= h)
    		return false;
    	return (solve(root->left,l,root->val) && solve(root->right,root->val,h));
	}
};

int main()
{


	return 0;
}

