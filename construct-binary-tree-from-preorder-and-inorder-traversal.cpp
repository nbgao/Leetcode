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
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        return build(preorder,inorder,0,preorder.size()-1,0,preorder.size()-1);
    }
    TreeNode *build(vector<int> &preorder,vector<int> &inorder,int l1,int r1,int l2,int r2)
    {
    	if(l1 > r1)
    		return NULL;
    	int i,count=0,R = preorder[l1];
    	for(i=l2;i<=r2 && inorder[i]!=R;i++)
    		count++;
    	TreeNode *root = (TreeNode *)malloc(sizeof(TreeNode));
    	root->val = R;
    	root->left = build(preorder,inorder,l1+1,l1+count,l2,i-1);
    	root->right = build(preorder,inorder,l1+1+count,r1,i+1,r2);
		return root;
	}
};

int main()
{
	

	return 0;
}

