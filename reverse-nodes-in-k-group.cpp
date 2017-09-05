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

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        if(head == NULL)
        	return NULL;
        ListNode *p = head;
        for(int i=0;i<k;i++)
        {
        	if(p == NULL)
        		return head;
        	p = p->next;
		}
		ListNode *L = reverse(head,p);
		head->next = reverseKGroup(p,k);
		return L;
    }
    ListNode *reverse(ListNode *s,ListNode *e)
    {
    	ListNode *pre = NULL;
    	while(s != e)
    	{
    		ListNode *t = s->next;
    		s->next = pre;
    		pre = s;
    		s = t;
		}
		return pre;
	}
};

int main()
{


	return 0;
}

