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
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int> > result;
        vector<int> path;
        pathSum_fun(root,sum,result,path);
        return result;
    }
    void pathSum_fun(TreeNode *root, int sum, vector<vector<int> > &result, vector<int> path)
    {
    	if(root == NULL)
    		return;
    	path.push_back(root->val);
    	if(root->left == NULL && root->right == NULL && sum == root->val)
    	  	result.push_back(path);
    	pathSum_fun(root->left,sum - root->val, result, path);
    	pathSum_fun(root->right,sum - root->val, result, path);
	}
};

int main()
{


	return 0;
}

