#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int>> result;
        queue<TreeNode *> q;
        if(root != NULL)
        	q.push(root);
        while(!q.empty())
        {
        	int n = q.size();
        	vector<int> v;
        	while(n--)
        	{
        		TreeNode *p = q.front();
        		q.pop();
        		if(p->left)
        			q.push(p->left);
        		if(p->right)
        			q.push(p->right);
        		v.push_back(p->val);
			}
			if(result.size()%2 != 0)
				reverse(v.begin(), v.end());
			result.push_back(v);
		}
		return result;
    }
};

int main()
{


	return 0;
}

