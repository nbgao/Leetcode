#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if(head == NULL || head->next == NULL)
        	return head;
        
        ListNode L(-1);
        L.next = head;			//头结点前增加一个结点 
		ListNode *f = &L;	//f为p的前一个结点 
        ListNode *p = head;		//p为当前结点 
        while(p != NULL && p->next != NULL)
        {
        	ListNode *q = p->next;	//q为p的后一个结点 
        	p->next = q->next;		//p指向q的后一结点 
        	q->next = p;			//q指向p 
        	f->next = q;			//f指向p 
        	f = p;					//f变为p 
        	p = p->next;			//p后移一个结点 
		}
		return L.next;
    }
};

int main()
{


	return 0;
}

