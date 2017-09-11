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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        ListNode L = ListNode(0);
        L.next = head;
        ListNode *p = &L;
        ListNode *q = head;
        for(int i=1;i<m;i++)
        {
        	p = q;
        	q = q->next;
		}
		for(int i=0;i<n-m;i++)
		{
			ListNode *t = q->next;
			q->next = t->next;
			t->next = p->next;
			p->next = t;
		}
		return L.next;
    }
};

int main()
{


	return 0;
}

