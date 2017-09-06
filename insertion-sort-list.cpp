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

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *insertionSortList(ListNode *head) {
        if(head==NULL || head->next==NULL)
        	return head;
        ListNode L(0),*p;
		L.next = insertionSortList(head->next);
		p = &L;
		
		while(p && p->next && p->next->val < head->val)
			p = p->next;
		head->next = p->next;
		p->next = head;
		
		return L.next;
    }
};

int main()
{


	return 0;
}

