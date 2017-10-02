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
    void reorderList(ListNode *head) {
        if(head == NULL || head->next == NULL)
        	return;
        ListNode *f = head;
        ListNode *s = head;
        while(f->next != NULL && f->next->next != NULL)
        {
        	f = f->next->next;
        	s = s->next;
		}
		
		ListNode *L2 = s->next;
		s->next = NULL;
		ListNode *p = NULL;
		while(L2 != NULL)
		{
			ListNode *q = L2->next;
			L2->next = p;
			p = L2;
			L2 = q;
		}
		
		ListNode *L1 = head;
		L2 = p;
		while(L1 != NULL && L2 != NULL)
		{
			ListNode *q1 = L1->next;
			ListNode *q2 = L2->next;
			L1->next = L2;
			L1 = q1;
			L2->next = L1;
			L2 = q2;
		
		}
    }
};

int main()
{


	return 0;
}

