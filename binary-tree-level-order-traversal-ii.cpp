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
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > result;
        if(root == NULL)
        	return result;
        
        queue<TreeNode *> q;
        q.push(root);
        
        while(!q.empty())
        {
        	vector<int> level;
        	int n = q.size();
        	for(int i=0;i<n;i++)
        	{
        		TreeNode *cur = q.front();
        		q.pop();
				level.push_back(cur->val);
				if(cur->left != NULL)
					q.push(cur->left);
				if(cur->right != NULL)
					q.push(cur->right);
			}
			result.push_back(level);
		}
		reverse(result.begin(),result.end());	//×Ôµ×ÏòÉÏµ¹Ðò 
    	return result; 
	}
};

int main()
{


	return 0;
}

