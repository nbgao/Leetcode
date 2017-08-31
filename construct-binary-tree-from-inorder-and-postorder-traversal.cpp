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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        int l_in = inorder.size(),l_post = postorder.size();
        return DFS(inorder,0,l_in-1,postorder,0,l_post-1);
    }
    TreeNode *DFS(vector<int> &inorder,int in_start,int in_end,vector<int> &postorder,int post_start,int post_end)
    {
    	if(in_start > in_end)
    		return NULL;
    	TreeNode *root = new TreeNode(postorder[post_end]);
    	int mid;
    	for(mid=in_start;mid<=in_end;mid++)
    	{
    		if(inorder[mid] == root->val)
    			break;
		}
		int l_left = mid - in_start;
		root->left = DFS(inorder,in_start,mid-1,postorder,post_start,post_start+l_left-1);
		root->right = DFS(inorder,mid+1,in_end,postorder,post_start+l_left,post_end-1);
		return root;
	}
};

int main()
{


	return 0;
}

