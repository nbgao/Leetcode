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

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL || head->next == NULL)
        	return head;
        ListNode *L = new ListNode(-1);
        L->next = head;
        ListNode *p = L;
        ListNode *q = L->next;
        while(q)
        {
        	while(q->next && q->next->val == q->val)
        		q = q->next;
        	if(p->next != q)
        	{
        		ListNode *t = q->next;
        		q->next = NULL;
        		p->next = t;
        		q = t;
			}else{
				p = q;
				q = q->next;
			}
		}
		return L->next;        
    }
};

int main()
{


	return 0;
}

