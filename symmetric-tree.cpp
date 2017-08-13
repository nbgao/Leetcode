#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if(root == NULL)
        	return true;
        return isEqual(root->left,root->right);        	
    }
    bool isEqual(TreeNode *L,TreeNode *R)
    {
    	if(L==NULL && R==NULL)
    		return true;
    	else if(L==NULL || R==NULL)
    		return false;
    	else if(L->val != R->val)
    		return false;
    	else
    		return isEqual(L->left,R->right) && isEqual(L->right,R->left);
	}
};

int main()
{


	return 0;
}

