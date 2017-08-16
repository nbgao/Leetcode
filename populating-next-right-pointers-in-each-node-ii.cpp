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
	int val;
	TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
public:
    void connect(TreeLinkNode *root) {
        while(root)
        {
        	TreeLinkNode L(-1),*f,*p;
        	f = &L;
        	p = root;
        	while(p)
        	{
        		if(p->left != NULL)
        		{
        			f->next = p->left;
        			f = f->next;
				}
				if(p->right != NULL)
				{
					f->next = p->right;
					f = f->next;
				}
				p = p->next;
			}
			root = L.next;
		}
    }
};

int main()
{


	return 0;
}

