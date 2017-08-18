#include <bits/stdc++.h>
 
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    	if(head == NULL)
    		return NULL;
    		
        ListNode *p = head, *q = head;
        while(q && q->next)
        {
        	p = p->next;
        	q = q->next->next;
			if(p == q)
			{
				while(q != head)
				{
					q = q->next;
					head = head->next;
				}
				return head;
			}
		} 
		return NULL;
    }
};

int main()
{


	return 0;
}

