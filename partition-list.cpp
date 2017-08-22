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
    ListNode *partition(ListNode *head, int x) {
        if(head == NULL)
        	return NULL;
        ListNode *L1 = new ListNode(0);
        ListNode *L2 = new ListNode(0);
        ListNode *p1 = L1;
        ListNode *p2 = L2;
        ListNode *p = head;
        while(p != NULL)
        {
        	if(p->val < x)
        	{
        		p1->next = p;
        		p1 = p1->next;
			}else{
				p2->next = p;
				p2 = p2->next;
			}
			p = p->next;
		}
		p2->next = NULL;
		p1->next = L2->next;
		return L1->next;
    }
};

int main()
{


	return 0;
}

