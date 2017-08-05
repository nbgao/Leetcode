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
        L.next = head;			//ͷ���ǰ����һ����� 
		ListNode *f = &L;	//fΪp��ǰһ����� 
        ListNode *p = head;		//pΪ��ǰ��� 
        while(p != NULL && p->next != NULL)
        {
        	ListNode *q = p->next;	//qΪp�ĺ�һ����� 
        	p->next = q->next;		//pָ��q�ĺ�һ��� 
        	q->next = p;			//qָ��p 
        	f->next = q;			//fָ��p 
        	f = p;					//f��Ϊp 
        	p = p->next;			//p����һ����� 
		}
		return L.next;
    }
};

int main()
{


	return 0;
}

