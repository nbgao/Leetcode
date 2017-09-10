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

class Solution {
public:
    ListNode *sortList(ListNode *head) {
        if(head==NULL || head->next==NULL) 
        	return head;
        
        ListNode *p = head, *q = head->next;
        while(q && q->next)
        {
        	p = p->next;
        	q = q->next->next;
		}
		
		ListNode *l1 = sortList(p->next);
		p->next = NULL;
		ListNode *l2 = sortList(head); 
		return merge(l1, l2);
    }
    ListNode *merge(ListNode *l1,ListNode *l2)
    {
    	ListNode L(0);
    	ListNode *p = &L;
    	while(l1 && l2)
    	{
    		if(l1->val < l2->val)
    		{
    			p->next = l1;
    			l1 = l1->next;
			}else{
				p->next = l2;
				l2 = l2->next;
			}
			p = p->next;
		}
		if(l1 != NULL)
			p->next = l1;
		if(l2 != NULL)
			p->next = l2;
		return L.next;
	}
};

int main()
{


	return 0;
}

