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

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return ArrayToBST(num,0,num.size());
    }
    TreeNode *ArrayToBST(vector<int> &num,int begin,int end)
    {
    	if(begin >= end)
    		return NULL;
    	int mid = (begin+end)>>1;
    	TreeNode *root = new TreeNode(num[mid]);
    	root->left = ArrayToBST(num,begin,mid);
    	root->right = ArrayToBST(num,mid+1,end);
    	return root;
	}
};

int main()
{


	return 0;
}

