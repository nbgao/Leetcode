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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        if(!root)
        	return result;
        stack<TreeNode*> s;
        TreeNode *p=root;
        while(!s.empty() || p!=NULL)
        {
        	while(p)
        	{
	        	s.push(p);
	        	p=p->left;	
			}
			if(!s.empty())
			{
				p = s.top();
				s.pop();
				result.push_back(p->val);
				p = p->right;
			}
		}
		return result;
    }
};

int main()
{

	return 0;
}

