#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxDepth(TreeNode *root) {
        if(root == NULL)
            return 0;
        else{
            int max_left = maxDepth(root->left);
            int max_right = maxDepth(root->right);
            return max(max_left,max_right)+1;
        }
    }
};

int main()
{
	
	return 0;
}

