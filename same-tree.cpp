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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if(p == NULL && q == NULL)
        	return true;
        else if(p == NULL || q == NULL)
        	return false;
        else if(p->val == q->val)
        	return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
		return false;
    }
};

int main()
{

	return 0;
}

