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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        if(l1 == NULL)
        	return l2;
        if(l2 == NULL)
        	return l1;
        ListNode *L = new ListNode(0);
        ListNode *p = L;
        
        int x = 0;
        while(l1 || l2 || x)
        {
        	if(l1)
        	{
        		x += l1->val;
        		l1 = l1->next; 
			}
			if(l2)
			{
				x += l2->val;
				l2 = l2->next;
			}
			p->next = new ListNode(x%10);
			p = p->next;
			x /= 10;
		}
		return L->next;
    }
};

int main()
{


	return 0;
}

