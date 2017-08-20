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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> result;
        if(root == NULL)
        	return result;
        stack<TreeNode *> s;
        s.push(root);
        while(!s.empty())
        {
        	TreeNode *p = s.top();
			s.pop();
			result.push_back(p->val);
			if(p->left != NULL)
				s.push(p->left);
			if(p->right != NULL)
				s.push(p->right);
		}
		reverse(result.begin(), result.end());
		return result;
    }
};

int main()
{


	return 0;
}

