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
    vector<TreeNode *> generateTrees(int n) {
        return Create(1,n);
    }
    vector<TreeNode *> Create(int l,int r)
    {
    	vector<TreeNode *> result,L,R;
    	if(l>r)
    		result.push_back(NULL);
    	else if(l == r){
			TreeNode *root = new TreeNode(l);
			result.push_back(root);
			return result;
		}
		for(int i=l;i<=r;i++)
		{
			L = Create(l,i-1);
			R = Create(i+1,r);
			for(int j=0;j<L.size();j++)
				for(int k=0;k<R.size();k++)
				{
					TreeNode *root = new TreeNode(i);
					root->left = L[j];
					root->right = R[k];
					result.push_back(root);
				}
		}
    	return result;
	}
};

int main()
{


	return 0;
}

