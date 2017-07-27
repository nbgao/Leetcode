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
    bool isBalanced(TreeNode *root) {
        if(fun(root)==-1)
        	return false;
        else
        	return true;
    }
    
    int fun(TreeNode *root)
    {
    	if(root == NULL)
    		return 0;
    		
		int leftHeight = fun(root->left);
		int rightHeight = fun(root->right);
		if(leftHeight==-1 || rightHeight==-1)
			return -1;
		if(abs(leftHeight-rightHeight) > 1)
			return -1;
		return max(leftHeight,rightHeight)+1;
	}
};

int main()
{

	return 0;
}

