#include <bits/stdc++.h>
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
#include <set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode *sortedListToBST(ListNode *head) {
        return BST(head,NULL);
    }
    TreeNode *BST(ListNode *head,ListNode *tail)
    {
    	if(head == tail)
    		return NULL;
    	ListNode *s = head;
    	ListNode *f = head;
    	while(f!=tail && f->next!=tail)
    	{
    		s = s->next;
    		f = f->next->next;
		}
		TreeNode *root = new TreeNode(s->val);
		root->left = BST(head,s);
		root->right = BST(s->next,tail);
		
		return root;
	}
};

int main()
{


	return 0;
}

