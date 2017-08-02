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
		queue<int> level;	//��¼ÿһ�� 
        int layer = 0;		//��¼��ǰ���ڲ��� 
        
        if(root == NULL)
        	return list;
    	
       	TreeNode *cur = root;
        q.push(cur);
        level.push(0);
        
        
        while(!q.empty())
        {
        	cur = q.front();			//��¼��ǰ�� 
        	layer = level.front();
        	
        	q.pop();
        	level.pop();
        	
        	if(list.size() < layer+1)
			{
        		vector<int> v;
        		list.push_back(v);			//list����һ�� 
			}
        	
        	list[layer].push_back(cur->val);
        	
        	if(cur->left != NULL)		//�������ǿ� 
        	{
        		q.push(cur->left);
        		level.push(layer+1);
			}
			if(cur->right != NULL)		//�������ǿ� 
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

