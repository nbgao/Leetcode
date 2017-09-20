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
	int Max;
    int maxPathSum(TreeNode *root) {
        Max = INT_MIN;
        maxSum(root);
		return Max;
    }
    int maxSum(TreeNode *root){
    	if(root == NULL)
    		return 0;
    	int l_Max = max(0, maxSum(root->left));
    	int r_Max = max(0, maxSum(root->right));
    	Max = max(Max, l_Max + r_Max + root->val);
    	return max(l_Max, r_Max) + root->val;
	}
};

int main()
{


	return 0;
}

