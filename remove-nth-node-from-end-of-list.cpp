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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(head == NULL || n<0)
        	return head;
        int l = 0;
        ListNode *L = new ListNode(0);
        L->next = head;
        ListNode *p = L;
        while(p != NULL)
        {
        	l++;
        	p = p->next;
		}
		p = L;
		for(int i=1;i<l-n;i++)
			p = p->next;
		p->next = p->next->next;
		return L->next;
    }
};

int main()
{


	return 0;
}

