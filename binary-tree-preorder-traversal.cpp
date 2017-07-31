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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> list;
		stack<TreeNode *> s;
		if(root == NULL)
			return list;
		
		s.push(root);
		while(!s.empty())
		{
			TreeNode *cur = s.top();
			s.pop();
			list.push_back(cur->val);
			if(cur->right != NULL) 
				s.push(cur->right);
			if(cur->left != NULL)
				s.push(cur->left);
		}
		return list;
    }
};

int main()
{

	return 0;
}

