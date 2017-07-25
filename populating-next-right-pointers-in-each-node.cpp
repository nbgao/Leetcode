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

 struct TreeLinkNode {
      TreeLinkNode *left;
      TreeLinkNode *right;
      TreeLinkNode *next;
 };
    
class Solution {
public:
    void connect(TreeLinkNode *root) {
    	if(root==NULL)
    		return;
    	TreeLinkNode *p = root,*q;
    	while(p->left)
    	{
    		q = p;
    		while(q)
    		{
    			q->left->next = q->right;
    			if(q->next)
    				q->right->next = q->next->left;
    			q = q->next;
			}
			p = p->left;
		}
    }
};

int main()
{

	return 0;
}

