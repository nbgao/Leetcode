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
    vector<vector<int> > levelOrder(TreeNode *root) {
        vector<vector<int> > list;
        queue<TreeNode *> q;
		queue<int> level;	//记录每一层 
        int layer = 0;		//记录当前所在层数 
        
        if(root == NULL)
        	return list;
    	
       	TreeNode *cur = root;
        q.push(cur);
        level.push(0);
        
        
        while(!q.empty())
        {
        	cur = q.front();			//记录当前根 
        	layer = level.front();
        	
        	q.pop();
        	level.pop();
        	
        	if(list.size() < layer+1)
			{
        		vector<int> v;
        		list.push_back(v);			//list新增一行 
			}
        	
        	list[layer].push_back(cur->val);
        	
        	if(cur->left != NULL)		//左子树非空 
        	{
        		q.push(cur->left);
        		level.push(layer+1);
			}
			if(cur->right != NULL)		//右子树非空 
        	{
        		q.push(cur->right);
        		level.push(layer+1);
			}
		}
		return list; 
    }
};

int main()
{


	return 0;
}

